//Abstract class: It has atleast one pure virtual function and also can have abstract method
// and force to override the abstract method in the concrete class. Has constructor but object cannot be created for it.
// Used for shared code + enforce method implementation in derived and define interfaces as well.

//Interfaces: cannot have constructor, has abstract method , good for multiple inheritance, abstraction and can implement multiple interfaces,
// can have only public static final constants[no instance variables]
// Pure virtual function : Virtual function which has no implementation in base class and assigned with 0


// why an object cannot be created for abstract class is because we need some method implementation inorder to create objects
// of a class but due to presence of pure virtual in base leads to no implementation in base and hence force derived to have implementation
// but that doesnt mean it wont have constructor it will have. It runs first intializes then concrete sub class constructor gets running.

#include<iostream>
using namespace std;

class A // abstract class
{
    public:
    virtual void show() = 0; //pure virtual function
};

class B : public A
{
    void show() override
    {
        cout << "Pure virtual function is overriden" << endl;
    }

};

int main()
{
    A* a = new B;
    a->show();
    return 0;
}
