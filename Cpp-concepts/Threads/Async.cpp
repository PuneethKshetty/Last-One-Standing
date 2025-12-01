//async: runs function asynchronously[in new thread] and returns a future that holds result.
//3 launch policy: 1. std::launch::async[creates a thread[directly creates task]], b. std::launch::deffered[do not create thread[in future we need to create task], just makes an entry], c std::launch::Async | std::launch::deffered
#include<iostream>
#include<future>
#include<bits/stdc++.h>
using namespace std;

int findOdd(int i, int j)
{
    cout << std::this_thread::get_id() << endl;
    int count = 0;
    for(i = 0; i < j;i ++)
    {
        count += i;
    }
    return count;
}

int main()
{
    int i = 0, j = 20;
    //future<int> futureObj = async(launch::async, findOdd, i, j);
    future<int> futureObj = async(launch::deferred, findOdd, i, j);
    cout << std::this_thread::get_id() << endl;
    cout << futureObj.get() << endl;
    return 0;
} // namespace std;
