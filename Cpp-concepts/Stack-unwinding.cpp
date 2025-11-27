//Stack uwninding does the resource cleanup by removing the function call stack when an exception occurs.
// First when exception occurs:
//1. In runtime, the function frame will be popped out of the function call stack.
// 2. Destructor of the local object in each function is called
// 3. Tries to find an exception handler [catch], if doesnt find it, then it will terminate
//To resolve this: use smart pointers, RAII, STL, make destructor noexcept, remove try and catch from destructor, add catch for exception handling.
#include<iostream>
using namespace std;

class A
{
    public:
    A() { cout << "Constructor called\n";}
    ~A() { cout << "Destructor called \n"; }
};

void fun1()
{
    A a;
    cout << "Hello I'm in fun1" << endl;
    throw runtime_error("Error has been occurred");
}

int main()
{
    try
    {
        fun1();
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught :: " << e.what() << '\n';
    }
    return 0;
    
}
