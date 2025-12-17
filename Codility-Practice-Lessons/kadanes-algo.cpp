#include <algorithm>
#include<numeric>
#include<climits>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // Implement your solution here
    int sum = 0;
    int maxi = A[0];
    for(int i=0;i < (int)A.size(); i++)
    {
        sum = sum + A[i];
        if(A[i] > sum)
        {
            sum = A[i];
        }
        maxi = max(maxi,sum);

    }
    return maxi;
}
