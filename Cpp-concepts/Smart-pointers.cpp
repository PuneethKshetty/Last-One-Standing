#include<iostream>
#include<memory>
using namespace std;

//Smart pointers: They are like wrapper class for the raw pointers and it deallocates the memory automatically when pointer is out of scope
//1. Unique ptr: Stores one object at a time, Cannot copy it but we can move or transfer ownership to another unique ptr
// class A
// {
//     public:
//     int length;
//     int breadth;

//     A(int a, int b)
//     {
//         length = a;
//         breadth = b;
//     }

//     void area(){cout << (length * breadth) << endl;}

// };

//2. Shared ptr: One or more pointer have the ownership to same object. refernce count is maintained here.
//3. Weak ptr: Non owning reference it is similar to shared ptr, avoids circular reference and strong reference cycle
class A
{
    public:
    int length;
    int breadth;

    A(int a, int b)
    {
        length = a;
        breadth = b;
    }

    void area(){cout << (length * breadth) << endl;}

};

//4. auto ptr: deallocates memory when lifetime of dynamically allocated is object[auto_ptr] is out of scope, takes ownership where obj points to
// auto_ptr<int> a(new int(10));
// auto_ptr<int> b = a;
// cout << *a << endl << *b << endl;

int main()
{
    shared_ptr<A> ptr1 = make_shared<A>(20,30);
    weak_ptr<A> ptr2;
    ptr2 = ptr1;
    ptr1->area();
    cout << ptr1.use_count() << endl;
    cout << ptr2.use_count() << endl;
    return 0;

}
