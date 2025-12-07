// .Given an integer array nums and an integer k, return the kth largest element in the array.
// Note that it is the kth largest element in the sorted order, not the kth distinct element.
// Can you solve it without sorting?

// Example 1:

// Input: nums = [3,2,1,5,6,4], k = 2
// Output: 5
// 6 5 4 3 2 1

// Example 2:
// Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
// Output: 4
// 6 5 5 4 3 3 2 2 1
 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kthLargestElement(vector<int>& nums, int k)
{
    //This is max heap
    priority_queue<int> pq{nums.begin(),nums.end()};
    for(int i = 0; i < k - 1; i++)
    {
        cout << pq.top() << endl;
        pq.pop();
    }
    return pq.top();

    //Min heap
    // priority_queue<int,vector<int>,greater<int>> pq;
    // for(int i = 0; i < nums.size(); i++)
    // {
    //     pq.push(nums[i]);
    //     if(pq.size() > k)
    //     {
    //         pq.pop();
    //     }
    // }
    // return pq.top();
}

int main()
{
    vector<int> arr{1,1,2,2,3,3,5};
    cout << kthLargestElement(arr,4) << endl;
    return 0;
}
