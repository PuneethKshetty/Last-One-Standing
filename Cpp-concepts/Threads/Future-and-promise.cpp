#include<iostream>
#include<bits/stdc++.h>
#include<thread>
using namespace std;

void fun(promise<int> obj, int i, int j)
{
    int count = 0;
    for(i = 0;i < j;i++)
    {
        if(i & 1)
        {
            count += i;
        }
    }
    obj.set_value(count);
}

int main()
{
    int i = 0, j = 10;
    promise<int> promiseObj;
    future<int> futureObj = promiseObj.get_future();
    thread t(fun, std::move(promiseObj), i, j);
    cout<< futureObj.get() << endl;
    t.join();
    return 0;
}
