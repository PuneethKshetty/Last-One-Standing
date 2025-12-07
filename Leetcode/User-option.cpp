#include<iostream>
#include<bits/stdc++.h>
#include<memory>
using namespace std;

class A
{
    public:
    string name;
    A(string n)
    {
        cout << "Constructor called \n"; 
        name = n;
    }
    
    ~A() { cout << "destructor called \n"; }
    
    void doWork()
    {
        cout << "Do some work for " << name << endl;
    }
};

int main()
{
    int choice;
    cout << "Let user select an option :: " << endl;
    cin >> choice;
    switch(choice)
    {
        case 1: 
        {
            cout << "Selected" << endl;
            unique_ptr<A> myObj = make_unique<A>("Puneeth");
            myObj->doWork();
            break;
        }
        case 2: 
            cout << "Cancelled " << endl;
            cout << "In live menu" << endl;
            break;
        default:
            break;
    }
    return 0;
    
}
