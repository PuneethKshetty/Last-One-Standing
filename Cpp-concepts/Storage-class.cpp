//Storage classes: Defines Characteristics of variable/functions
//1. auto: local var, RAM, points to any type, stores garbage value, function block
//2. static: local var, RAM, initialized only once and exist till lifetime of program, zero value
//3. extern: global var, RAM, when its declared can be used in different files as well, zero value
//4. register: local var, register in CPU, stores garbage value, function block
//5. mutable: local var, modifies one or more data member of class , stores garbage value, class 
//6. thread_local: local/global , RAM, whole thread, defines object as thread_local

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

extern int c = 40;

thread_local int t = 20;
mutex mtx;

class A
{
    public:
    int x;
    mutable int y;

    A() : x(20) , y(20) {}
};


int main()
{
    auto a = 20; //auto
    cout << "a:: " << sizeof(a) << endl;

    static int b = 30; //static
    cout << "b:: " << b << endl;

    cout << "c:: " << c << endl;

    register char d = 'A';
    cout << "d :: "  << d << endl;

    const A e;
    // e.x = 20; cannot be modified not mutable
    e.y = 30;
    cout << "Mutable y :: " << e.y << endl;

    thread t1([](){
        t = t + 1;
        lock_guard<mutex> l1(mtx);
        cout << "Thread 1 is :: " << t << endl;
    });

    t1.join();

    cout<< "Main Local thread :: " << t << endl;
    return 0;
}
