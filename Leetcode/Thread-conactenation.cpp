#include <iostream>
#include <thread>
#include <string>
#include <mutex>

int main() {
    std::string s1 = "Hello";
    std::string s2 = "World";
    std::string result;
    std::mutex m;  // to protect `result` and stdout

    // Thread t: print "Hello"
    std::thread t([&] {
        std::lock_guard<std::mutex> lock(m);
        std::cout << s1;
    });

    // Thread t1: print " World"
    std::thread t1([&] {
        std::lock_guard<std::mutex> lock(m);
        std::cout << " " << s2;
    });

    // Thread t2: compute result = "Hello World"
    std::thread t2([&] {
        // No need to lock for local computation, but lock if you write shared state
        std::string local = s1 + " " + s2;
        std::lock_guard<std::mutex> lock(m);
        result = std::move(local);
        std::cout << "\nResult: " << result << '\n';
    });

    t.join();
    t1.join();
    t2.join();

    // Safely print final result
    {
        std::lock_guard<std::mutex> lock(m);
        std::cout << "\nResult: " << result << '\n';
    }

    return 0;
}
