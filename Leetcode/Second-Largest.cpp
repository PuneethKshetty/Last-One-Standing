#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> nums)
{
    int largest = -1;
    int secondlargest = -1;
    for(int i=0; i < nums.size();i++)
    {
        if(nums[i] > largest)
        {
            secondlargest = largest;
            largest = nums[i];
        }
        if((nums[i] != largest) && (nums[i] > secondlargest))
        {
            secondlargest = nums[i];
        }
    }
    return secondlargest;
}

int second2(vector<int> nums)
{
    set<int> st;
    for(int i=0; i < nums.size();i++)
    {
        st.insert(nums[i]);
    }
    auto it = st.end();
    it--;
    it--;
    return *it;
}

int main()
{
    vector<int> nums{5,7,8,9,1,4,1};
    cout<<secondLargest(nums)<<endl;
    cout<<second2(nums)<<endl;
    return 0;
} 
