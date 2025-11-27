#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    vector<int> show(vector<int> nums)
    {
        int original = nums.size();
        for(int i = 0;i < original;i++)
        {
            cout << "Everything is removed :: " << nums[i] << endl;
            nums.pop_back(); //example of vector push_back
        }
        return nums;
    }

    list<int> show(list<int> lst)
    {
        int size = lst.size();
        for(int i = 0; i < size; i++)
        {
            lst.remove(2);
        }
        return lst;
    }
};

int main()
{
    A a;
    vector<int> nums{1,2,3,4,5,6};
    list<int> lst{1,2,3};
    vector<int> res = a.show(nums);
    list<int> ls = a.show(lst);
    for(auto x : res)
    {
        cout << x << endl;
    }
    for(auto y : ls)
    {
        cout << y << endl;
    }
    return 0;
}
