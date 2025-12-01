#include<iostream>
#include<thread>
using namespace std;

void fun(int count)
{
    cout << count << endl;
    //std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}
int main()
{
    thread t1(fun,10);
    cout << "Start Thread" << endl;
    //t1.join(); //[Join : once thread starts we wait for the thread to finish by calling join() on t1]
    //cannot do twice join() or detach(), gives system error[terminates]
    //but we can check if joinable() for both
    t1.detach(); // detach new created thread from parent thread
    if(t1.joinable())
        t1.detach();
    cout << "End thread" << endl;
    return 0;
}
