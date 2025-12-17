#include<iostream>
using namespace std;

int solution(int A, int B, int K)
{
    int c = B/K - A/K;
    if(A%K == 0) { c++; }
    return c;
}
int main()
{
    cout << solution(6,10,3) << endl;
    return 0;
}
