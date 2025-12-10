#include<iostream>
using namespace std;

void Palindrome(int& n)
{
    int original = n;
    int rev = 0;
    while(n > 0)
    {
        int rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    cout << rev << endl;
    cout << original << endl;
    if(rev == original)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

int main()
{
    int n1 = 121;
    Palindrome(n1);
    return 0;
}
