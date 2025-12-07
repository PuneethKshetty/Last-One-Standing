#include<iostream>
using namespace std;

string removespaces(string str)
{
    int i = 0;
    int j = 0;
    while(i < str.size())
    {
        if(str[i] != ' ')
        {
            //cout << str[i] << endl;
            str[j] = str[i];
            //cout << str[j] << endl;
            j++;
            //cout << str[j] << endl;
        }
        i++;
    }
    str.resize(j);
    return str;
}

int main()
{
    string str = "H ell  o   ";
    cout << removespaces(str) << endl;
    return 0;
}
