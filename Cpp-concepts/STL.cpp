//STL : Standard template library, collection of pre-built classes, they are used for organize and store the data object in systematic manner
//Types of STL: 1. Containers, 2. Iterators, 3. Algorithms
//1. Containers: Store and organize data. 
// [types: Sequence: Vector,list,deque, forward_list, arrays. 
// Adaptor containers: stack, queue, priority_queue
// Associative: map,multiset,multimap, set
// unordered associated containers: unordered_map,unordered_multiset,unordered_multimap, unordered_set]
//2. Algorithms: It has some methods which performs some basic operations. // sort, count, reverse, unique, accumulate, binary search, replace, find, upper bound, lower bound
//3. Iterators: objects that points to some memory location of STL containers where we want to perform some operations.
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<array>
#include<forward_list>
using namespace std;

class A
{
    
};

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    v.push_back(60);
    for(int i : v)
    {
        cout << i << endl;
    }

    // list<int> lst{1,2,3,4,5,6};
    // lst.push_front(0);
    // for(int i : lst)
    // {
    //     cout << i << endl;
    // }

    // deque<int> dq{1,2,4,5,6};
    // dq.pop_back();
    // for(int i : dq)
    // {
    //     cout << i << endl;
    // }

    // forward_list<int> lst{1,2,3,4,5};
    // lst.emplace_after(lst.before_begin(),3);
    // for(int i : lst)
    // {
    //     cout << i << endl;
    // }

    // array<int,5> arr{1,2,3,4,5};
    // arr.fill(2);
    // for(int i : arr)
    // {
    //     cout << i << endl; 
    // }
    return 0;
}
