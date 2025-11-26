//Shallow copy: Basically copies all data of variable into an object. Here default copy constructor is called , 
//Here obj1 when assigned to obj2 then both of it is affected due to same memory location.
#include <iostream>
using namespace std;

class A{
    public:
    int* a;
    
    A(int apple) { a = new int(apple);}
    
    void show()
    {
        cout << "A is :: " << *a << endl;
    }
    
    // ~A() { delete a;}
};

int main()
{
    A a(10);
    A a1 = a;
    a1.show();
    
    *a.a = 20;
    a1.show();
    return 0;
}

//Deep copy does the same thing copies all of data of variable but here each object will have independent memory location.
//so if obj1 changes obj2 might not be affected. User defined copy constructor is required
#include <iostream>
using namespace std;

class A{
    public:
    int* a;
    
    A(int apple) { a = new int(apple);}
    
    A(const A& obj) { a= new int(*(obj.a));}
    
    void show()
    {
        cout << "A is :: " << *a << endl;
    }
    
    ~A() { delete a;}
};

int main()
{
    A a(10);
    A a1 = a;
    a1.show();
    
    *a.a = 20;
    a1.show();
    return 0;
}
