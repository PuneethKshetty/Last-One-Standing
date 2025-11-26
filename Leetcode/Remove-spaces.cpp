#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string removespaces(string str)
{
    int i = 0;
    int j = 0;
    while(str[i])
    {
        if(str[i] != ' ')
        {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
    return str;
}

string addChar(string str, char add)
{
    str[str.size()-1] = add;
    return str;
}

char* addPointer(char* ptr)
{
    size_t len = strlen(ptr);
    char* ptr1 = new char[len + 1];
    strcpy(ptr1,ptr);
    ptr1[len - 1] = 'D';
    return ptr1;
    delete[] ptr1;
}

int main()
{
    string str = "H ello";
    char *ptr = "Hello";
    cout<<removespaces(str)<<endl;
    cout << addChar(str,'A') << endl;
    cout << addPointer(ptr)<<endl;
    return 0;
}
