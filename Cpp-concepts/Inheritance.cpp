#include<iostream>
using namespace std;

//Different types of inheritance
//1. Single Level inheritance: One child class inherits from One parent class.
// class A
// {
//     public:
//     int i;
//     A(int a) { i = a;}
//     void show()
//     {
//         cout << "Print A ::" << i << endl;
//     }
// };
// class B : public A
// {
//     public:
//     int j;
//     B(int a,int b) : A(a) { j = b;}
//     void show()
//     {
//         cout << "Print A ::" << i << " and " << "B ::" << j << endl;
//     }
// };

//2. Multi level inheritance: One child class inherits from its parents and that parent inherits from its ancestor.
// class A{ public: void Ashow() { cout << " I'm A parent class \n"; }};
// class B : public A {public: void Bshow() { cout << " I'm B parent class \n"; }};
// class C : public B{ public: void Cshow() { cout << "I'm C child class \n"; }};

//3. Multiple inheritance: one child class will have more than one parent class
// class A{ public: void Ashow() { cout << " I'm A parent class \n"; }};
// class B {public: void Bshow() { cout << " I'm B parent class \n"; }};
// class C: public A, public B{ public: void Cshow() { cout << "I'm C child class \n"; }};

//4. Hierarchial inheritance: one parent class will have more than one child class
// class A{ public: void Ashow() { cout << " I'm A parent class \n"; }};
// class B : public A {public: void Bshow() { cout << " I'm B parent class \n"; }};
// class C : public A{ public: void Cshow() { cout << "I'm C child class \n"; }};

//5. Hybrid inheritance: Mix between multiple and multi level inheritance
// class A{ public: A() { cout << " I'm A parent class \n"; }};
// class B : public A {public: B() { cout << " I'm B parent class \n"; }};
// class C : public A{ public: C() { cout << "I'm C child class \n"; }};
// class D : public C{ public: D() { cout << "I'm D child class \n"; }};

//6. Diamond inheritance: a child class is inherited from more than one parent class and those parent class is inherited by one ancestor
class A{ public: int a; void Ashow() { cout << " I'm A parent class \n"; }};
class B : virtual public A {};
class C : virtual public A{};
class D : public B, public C{};

int main()
{
    D d;
    A a;
    B b;
    C c;
    d.Ashow();
    cout << sizeof(a) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    return 0;
}
