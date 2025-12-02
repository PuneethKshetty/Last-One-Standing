#include<iostream>
#include<semaphore>
#include <thread>
#include<chrono>
#include<bits/stdc++.h>

using namespace std;
//non-signalled state
binary_semaphore mainToThread{0}, ThreadtoMain{0};

void fun()
{
    cout << "Worker thread running \n";
    mainToThread.acquire();
    ThreadtoMain.release();
}

int main()
{
    thread t(fun);
    cout << "Main Thread signalling \n";
    mainToThread.release();
    ThreadtoMain.acquire();
    cout << "Work finished \n";
    t.join();
    return 0;
} 
