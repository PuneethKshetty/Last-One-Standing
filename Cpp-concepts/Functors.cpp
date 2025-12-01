//Functors are basically objects which works as a function, achieved using operator overloading and here we save the state and use its value and wait until there is some manipulation happening.
#include<iostream>
using namespace std;

class A
{
    int val;
    public:
    A() {}
    A(int _val)
    {
        val = _val;
    }

    int operator()(const A& obj)
    {
        return val * obj.val;
    }
};

int main()
{
    A a(20);
    cout << a(30) << endl;
    cout << a(40) << endl;
    return 0;
}
