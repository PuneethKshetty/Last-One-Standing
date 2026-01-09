/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<memory>
using namespace std;

class A;
class B;

class A{
    
    public:
    shared_ptr<B> b_ptr;
    
    ~A() { std::cout << "A destroyed\n"; }
};


class B {
public:
   weak_ptr<A> a_ptr;
   
   ~B() { std::cout << "B destroyed\n"; }
};

int main()
{
    
    auto a = make_shared<A>();
    auto b = make_shared<B>();
    
    a->b_ptr = b;
    b->a_ptr = a;
    
    cout << a.use_count() << endl;
    cout << b.use_count() << endl;
    std::cout<<"Hello World \n";

    return 0;
}
