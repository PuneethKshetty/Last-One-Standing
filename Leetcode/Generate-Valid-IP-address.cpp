#include<iostream>
using namespace std;

//23334556720
bool isValid(string& s)
{
    int n = s.size();
    if(n == 1)
    {
        return true;
    }

    int val = stoi(s);

   if((s[0] == '0') || (val > 255))
       return false;
   return true;
}

void generateIPHelper(string& s, int index, string curr, int cnt, vector<string>& res)
{
    string temp = " ";
    if(index >= s.size())
    {
       return;
    }

    if(cnt == 3)
    {     
        temp = s.substr(index);
        
        if((temp.size() <= 3) && (isValid(temp))
        {
              res.push_back(curr+temp);
        }
        return;
    }

    for(int i = index; i < min((index + 3, (int)s.size());i++)
    {
        temp = temp + s[i];
        if(isValid(temp)
        { 
            generateIPHelper(s,i+1, curr+temp+'.',cnt+1, res);
        }
    }
}
string generateIp(string &s)
{
    vector<string> res;
    generateIPHelper(s,0,"", 0 , res); //string,index,temp, cnt, res)
    return res;
}
int main()
{
  vector<string> s = 2555678166;
  vector<string> res = generateIp(&s);
  for(auto ip : res)
  {
      cout<< "Valid IP" << endl;
      cout << ip << endl;
  }
  if(res.empty())
  {
     cout << "Invalid IP" << endl;
  }
  return 0;
}
