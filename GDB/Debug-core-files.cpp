#include<iostream>
#include<memory>
#include<bits/stdc++.h>
using namespace std;

void bar()
{
    // int* p = NULL;
//    p = static_cast<int*>(malloc(sizeof(int)));
    // *p = 42; //expect seg fault here

    //example 2
    int *p = (int *)0;
    cout << *p << endl;
}

void foo()
{
    bar();
}

int main()
{
    foo();
    return 0;
}
