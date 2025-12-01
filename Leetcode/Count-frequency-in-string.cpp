#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str = "abcdeabch";
    unordered_map<char,int> freq; //[stores frequency]

    for(auto ch : str)
    {
        freq[ch]++; // increment count
    }

    for(auto pair : freq)
    {
        cout << pair.first << " - " << pair.second << endl;
    }
    return 0;
}
