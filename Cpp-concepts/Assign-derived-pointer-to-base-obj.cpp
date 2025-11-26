#include<iostream>
using namespace std;

class Base
{
    public:
    virtual ~Base(){}
};

class Derived : public Base
{
    public:
    void show()
    {
        cout << "I'm in Derived \n";
    }
};

int main()
{
    // Base* b;
    Base* b = new Derived();
    // Derived d;
    // Base* b = &d;
    //Derived* d = static_cast<Derived*>(b);
    Derived* d = dynamic_cast<Derived*>(b);
    d->show();
    return 0;
}
