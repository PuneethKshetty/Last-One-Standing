#include<iostream>
using namespace std;

void Jump(int x, int y, int d)
{
    int a = (y - x) / d;
    if(x + a*d < y)
    {
        a = a + 1;
        cout << a << endl;
    }
    else
    {
        cout <<  a << endl;
    }
}

int main()
{
    int x = 1, y = 7, d = 2;
    Jump(x,y,d);
    return 0;
}
