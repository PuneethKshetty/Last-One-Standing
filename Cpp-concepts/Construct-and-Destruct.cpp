#include <iostream>
using namespace std;

class Base{
public:
    Base(){
        std::cout<<"Base construct\n";
    }
~Base(){
        std::cout<<"Base Destruct\n";
    }
     virtual void show(){
      std::cout<<"Hi\n";
  }
    // Base(const Base& b){
    //    std::cout<<"Copy Base construct\n";
    // }
};
class Derived: public Base{
public:
    Derived(){
        std::cout<<"Derived construct\n";
    }
~Derived(){
        std::cout<<"Derived Destruct\n";
    }
};
int main()
{
    std::cout<<"\n===========Direct assign===========\n";
    Derived d;
    // Base b;
 
    std::cout<<"\n===========Other object assign===========\n";
    Base b0 = d; // Slicing 
    //Derived d1;
    //Base b1 = d1; // Slicing
 
    std::cout<<"\n===========Reference assign===========\n";
    // Base* ptr = &d;
    // ptr->show();
    //Derived d2;
    //Base* ptr1 = &d2;
 
    // cout<<"\n===========Destructors===========\n";
    return 0;
}
