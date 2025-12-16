#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int BinaryGaps(int a)
{
    vector<int> add;
    while(a > 0)
    {
        add.push_back(a % 2);
        a = a / 2;
    }

    int b = 0, maxb = 0;
    for(int i = add.size() - 1; i >=0 ;i --)
    {
        if(add[i] == 0)
        {
            b++;
        }
        else if(add[i] == 1)
        {
            maxb = max(maxb,b);
            b = 0;
        }
    }
    return maxb;

}

int main()
{
    int n = 29;
    cout << BinaryGaps(n) << endl;
    return 0;
}
