#include<iostream>
#include<mutex>
#include<thread>
using namespace std;
mutex m1,m2;
void fun(int x)
{
    scoped_lock lock(m1,m2);
    cout << "X is::" << x << endl;
}
int main()
{
    const int nums = 10;
    thread threads[nums];
    for(int i = 0; i < nums; i++)
    {
       threads[i] = thread(fun,i);
    }
    for(int i = 0; i < nums; i++)
    {
        threads[i].join();
    }
    return 0;
}
