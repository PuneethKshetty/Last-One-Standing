#include<iostream>
using namespace std;

class A
{
    public:
    int i;
    A(int a)
    {
        cout<<"Constructor of A is called \n";
        i = a;
    }
    virtual void show()
    {
        cout<<"A base is ::"<<i<<endl;
    }

};

class B : public A
{
    public:
    int j;
    B(int a,int b) : A(a)
    {
        cout<<"Constructor of B is called \n";
        j = b;
    }
    virtual void show()
    {
        cout<<"A base is ::"<<i<<"B derived"<<j<<endl;
    }

};

void display(A obj)
{
    obj.show();
}

int main()
{
    A a(20);
    B b(20,30);
    display(a);
    display(b);
    A a1 = b;
    // b.show();
    return 0;
}
