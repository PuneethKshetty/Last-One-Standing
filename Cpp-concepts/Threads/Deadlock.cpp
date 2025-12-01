//deadlock: Deadlock is a condition where one thread waits for another thread excuetion to happen and 2nd thread also think the same vice versa. They basically wait for each other execution. but execution wont take place for both threads.
#include<iostream>
#include<thread>
#include<mutex>
using namespace  std;
mutex m1,m2;

void fun1()
{
    // m1.lock();
    // m2.lock();
    // cout << "Print fun1" << endl;
    // m1.unlock();
    // m2.unlock();

    // lock(m1,m2);
    // lock_guard<mutex>(m1, adopt_lock);
    // std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    // cout << "Print fun1" << endl;
    // lock_guard<mutex>(m2, adopt_lock);
    scoped_lock(m1,m2);
    cout << "Print fun1" << endl;
}

void fun2()
{
    // m1.lock();
    // m2.lock();
    // m1.unlock();
    // m2.unlock();
    // lock(m1,m2);
    // lock_guard<mutex>(m1, adopt_lock);
    // std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    // cout << "Print fun2" << endl;
    // lock_guard<mutex>(m2, adopt_lock);

    scoped_lock(m1,m2);
    cout << "Print fun2" << endl;
}

int main()
{
    thread t1(fun1);
    thread t2(fun2);
    t1.join();
    t2.join();
    return 0;
} 
