#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
#include<vector>
using namespace std;

mutex m1;
int count = 0;
condition_variable cv;

void printEven(bool isEven, int num)
{
    unique_lock<mutex> lock(m1);
    while(count < num)
    {
        cv.wait(lock, [&](){
            return count % 2 == 0;
        });
        count++;
        cout << count << endl;
        cv.notify_all();
    }
}

void printOdd(bool isEven, int num)
{
    unique_lock<mutex> lock(m1);
    while(count < num)
    {
        cv.wait(lock, [&](){
            return (count % 2 == 0 ) ? 0 : 1;
        });
        count++;
        cout << count << endl;
        cv.notify_all();
    }
}

int main()
{
    thread t(printEven,true,100);
    thread t1(printOdd, false, 100);
    t.join();
    t1.join();
    return 0;
}
