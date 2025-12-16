#include<iostream>
#include<vector>
using namespace std;

int missNum(vector<int> S)
{
    int xor1 , xor2 = 0;
    int n = S.size();
    for(int i = 0; i < n - 1;i++)
    {
        xor2 ^= S[i];
    }

    for(int i = 1; i <= n;i++)
    {
        xor1 ^= i;
    }

    return xor1 ^ xor2;

}

int main()
{
    vector<int> ans{1,2,4,5,6};
    cout << missNum(ans) << endl;
    return 0;
}
