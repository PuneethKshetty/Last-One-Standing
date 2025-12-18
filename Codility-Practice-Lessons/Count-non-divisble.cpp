#include<algorithm>
#include <vector>
#include<iostream>
#include<numeric>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A) {
    // Implement your solution here
    vector<int> count(*max_element(A.begin(),A.end())+1,0);
    vector<int> res;

    for(int i = 0;i < (int)A.size();i++)
    {
        count[A[i]]++;
    }

    for(int i=0;i < (int)A.size(); i++)
    {
        int s = 0;
        for(int j = 1; j * j <= A[i]; j++)
        {
            if(A[i] % j == 0)
            {
                s += count[j];
                if(A[i] / j != j) { s += count[A[i]/j];}
            }
        }
        res.push_back(A.size() - s);
    }
    return res;
}

int main()
{
    vector<int> A{1,2,4,5,3};
    vector<int> res = solution(A);
    for(auto i : res)
    {
        cout << i << endl;
    }
    return 0;
}
