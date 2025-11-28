// Lambda expression means it provide inline functions, special functions which access variable externally through value, reference in capture closure
// return type is specified by compiler , param has to be added and [] 
// here enclosure type: [&] - value externally passed by reference, [=] - value externally passed by value, [a,&b] = [&] - value externally passed by value and reference

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{1,2,3,4,5};

    auto fun = [] (const int& a, const int& b) {
        return a > b;
    };
    sort(v.begin(), v.end(), fun); //descending order

    for(int a : v)
    {
        cout << a << endl;
    }
    return 0;
}
