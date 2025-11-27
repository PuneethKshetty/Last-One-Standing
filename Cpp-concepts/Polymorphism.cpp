// Polymorphism: Means many forms. Achieved by functions and operators. Here functions, operator behave differently
// based on different context.
// Compile time polymorphism: Decision is made by the compiler during compile time. called as early binding or static binding
// 1. Function overloading: Functions having same name but differ with param types or no of args.
// 2. Operator overloading: C++ provides operator a special meaning when dealing with particular data types
// For ex: + [concatenate , addition] , << [output stream, left shift]
// Runtime polymorphism : Decision is made by compiler during runtime using vtables, Dynamic binding[late binding]
// 3. Function overriding: Using virtual function we do function overriding, here the derived class will have definition of base class method.
// Compiler decides which function to call in runtime with contrast to compile time.
#include<iostream>
using namespace std;

// class A
// {
//     public:

//     void show(int a, int b)
//     {
//         cout << "add" << a + b << endl;
//     }

//     void show(double a, double b)
//     {
//         cout << "float add" << a + b << endl;
//     }
// };

// class A
// {
//     public:
//     int a;
//     int b;

//     A(int apple, int banana) : a(apple) , b(banana) {}

//     A operator+(const A& obj)
//     {
//         return A(a + obj.a, b + obj.b);
//     }

// };

class A
{
    public:
    int a;
    virtual void show()
    {
        cout << "Base" << endl;
    }
};

class B : public A
{
    public:
    void show() override
    {
        cout << "Derived" << endl;
    }
};

int main()
{
    // A a(10,5),a1(2,4);
    // A a2 = a + a1;
    // cout << a2.a << " i" << a2.b << endl;
    // a.show(10,20);
    // a.show(10.10,20.10);

    A* a;
    B b;
    a = &b;
    a->show();
    return 0;
}
