//Mutex: Mutual exclusion:

//Used Mutex to avoid:
//Race conditon: 2 or more threads try to access same shared resource at a time. Use lock() and unlock() in mutex to avoid race.

// T1 | T2 : 1 | 1 = 2
#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int amount = 0;
mutex m;
void fun()
{
    m.lock();
    amount++; //critical section
    m.unlock();
}

int main()
{
    thread t1(fun);
    thread t2(fun);
    t1.join();
    t2.join();
    cout << "Amount is :: " << amount << endl;
    return 0;
}
