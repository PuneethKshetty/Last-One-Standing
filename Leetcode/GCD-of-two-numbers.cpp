#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    int res = min(a,b);
    while(res > 0)
    {
        if(a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}

//Euclidian algorithm: Ways to find GCD of 2 numbers:
//In this method, instead of doing subtraction we do divide bigger number by smaller number
int GCDOptimized(int a, int b)
{
    return b == 0 ? a : GCDOptimized(b, a % b);
}


int main()
{
    int a = 20, b = 28;
   // cout << GCD(a,b) << endl;
    cout << GCDOptimized(a,b) << endl;
    return 0;
}
