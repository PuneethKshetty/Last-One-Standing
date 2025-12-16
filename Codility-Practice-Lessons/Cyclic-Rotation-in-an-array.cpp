#include<iostream>
#include<vector>
using namespace std;

vector<int> rotateCyclic(vector<int> &A, int k)
{
    vector<int> B(A.size());
    for(int i = 0; i < A.size(); i++)
    {
        B[(i + k) % A.size()] =  A[i];
    }
    return B;
}

int main()
{
    vector<int> a{1,2,3,4,5,6};
    int k = 6;
    vector<int> b = rotateCyclic(a,k);
    for(auto a : b)
        cout << a << endl;
    return 0;
}
