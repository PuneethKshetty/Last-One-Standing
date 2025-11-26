//Sub array with the largest sum [Kadane algorithm]
//Kth largest sum array - Pending ...............
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

//Optimal
int MaxSumInSubArray(vector<int> nums)
{
    int sum = 0;
    int maxi = INT_MIN;
    for(int i=0;i < nums.size(); i++)
    {
        sum = sum + nums[i];
        if(sum > maxi)
        {
            maxi = sum;
        }
        if(sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

//Brute - Force
int MaxPart2(vector<int> nums)
{
    int maxi = INT_MIN;
    for(int i = 0; i < nums.size();i++)
    {
        for(int j = i;j< nums.size();j++)
        {
            int sum = 0;
            for(int k = i; k <= j;k++)
            {
                sum += nums[k];
            }
            maxi = max(sum,maxi);
        }
    }
    return maxi;
}

int main()
{
    vector<int>nums{-1, 2, 3, -1, 2, -6, 5};
    cout<<MaxSumInSubArray(nums)<<endl;
    cout<<MaxPart2(nums)<<endl;
    return 0;
} 

