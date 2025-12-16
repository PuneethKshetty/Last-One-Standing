#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> Oddoccurrence(vector<int> A)
{
    vector<int> ans;
    unordered_map<int,int> mp;
    for(int i = 0; i < A.size(); i++)
    {
        mp[A[i]]++;
    }

    for(auto i : mp)
    {
        if(i.second % 2 == 1)
        {
            ans.push_back(i.first);
        }
    }
    return ans;
}

int main()
{
    vector<int> A{1,2,3,4,4,2,1};
    vector<int> res = Oddoccurrence(A);
    for(auto i : res)
        cout << i << endl;
    return 0;
}
