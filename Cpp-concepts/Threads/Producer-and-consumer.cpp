
#include <iostream>
#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>

std::queue<int> q;
const size_t capacity = 5;
std::mutex m;
std::condition_variable cv_not_full, cv_not_empty;

void producer() {
    for (int i = 0; i < 20; ++i) {
        std::unique_lock<std::mutex> lk(m);
        cv_not_full.wait(lk, []{ return q.size() < capacity; });
        q.push(i);
        std::cout << "Produced " << i << ", size=" << q.size() << "\n";
        lk.unlock();
        cv_not_empty.notify_one();
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
}

void consumer(const char* name) {
    for (int i = 0; i < 10; ++i) {
        std::unique_lock<std::mutex> lk(m);
        cv_not_empty.wait(lk, []{ return !q.empty(); });
        int item = q.front(); q.pop();
        std::cout << name << " consumed " << item << ", size=" << q.size() << "\n";
        lk.unlock();
        cv_not_full.notify_one();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

int main() {
    std::thread p(producer), c1(consumer, "C1"), c2(consumer, "C2");
    p.join(); c1.join(); c2.join();
}

