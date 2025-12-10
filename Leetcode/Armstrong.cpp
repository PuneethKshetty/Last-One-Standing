#include<iostream>
#include<cmath>
using namespace std;

bool armstrong(int& n)
{
    int output = 0;
    string number = to_string(n);
    n = number.length();
    for(char i : number)
        output = output + pow(i - '0',n);
    if(output == stoi(number))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int n1 = 121;
    if(armstrong(n1))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
