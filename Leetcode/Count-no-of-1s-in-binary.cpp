#include<iostream>
using namespace std;

int countbits(int n)
{
    int count = 0;
    while(n)
    {
        count = count + (n & 1); // n & 1 is least significant bit[bitwise & both bits are 1 then 1][n & 1 = 1-> odd, n & 1 = 0-> even]
        n >>= 1; //here right shift [similar to n = n /2; ]
    }
    return count;
}

int main()
{
    cout << countbits(7) << endl;
    return 0;
} 
