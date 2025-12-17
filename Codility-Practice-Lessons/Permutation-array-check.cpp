#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int PermCheck(vector<int> A)
{
    if(A.empty()) { return 0; }
    sort(A.begin(),A.end());
    for(int i = 0;i < A.size();i++)
    {
        if(A[i] != i + 1)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    vector<int> A{1,3,4,2};
    cout << PermCheck(A) << endl;
    return 0;
}
