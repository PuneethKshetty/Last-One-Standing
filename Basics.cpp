// 1. consider the user input and print it out
#include<iostream>
using namespace std;

int main()
{
  int n; // any random variable of any type can be considered. My case is int
  cin >> n; 
  cout << n << endl; [Here endl does flushing of the output buffer and also creates a newline]
  or
  cout << n << "\n"; [Here no flush of the output buffer is done so it only creates newline.
  return 0;
}

// 2. If and else statements.

class Solution {
public:
    void studentGrade(int marks) {
        if(marks >= 90)
        {
            cout << "Grade A";
        }
        else if(marks >= 70)
        {
            cout << "Grade b";
        }
        else if(marks >= 50)
        {
            cout << "Grade C";
        }
        else if(marks >= 35)
        {
            cout << "Grade D";
        }
        else
        {
            cout<< "Fail";
        }
    }
};

// 3. Data Types: 
1. User-defined: [class,struct,union,enum]
2. Primitive[Built -in]: [int,char,float,double]
3. Derived: [arrays,function,pointer, reference]

//4. switch statments
class Solution {
public:
    void studentGrade(int marks) {
        if(marks >= 90)
        {
            cout << "Grade A";
        }
        else if(marks >= 70)
        {
            cout << "Grade b";
        }
        else if(marks >= 50)
        {
            cout << "Grade C";
        }
        else if(marks >= 35)
        {
            cout << "Grade D";
        }
        else
        {
            cout<< "Fail";
        }
    }
};

//5. Arrays and strings
a. Traverse in an array : 
  => for 1D array: for(i = 0 : n) - Here we directly print cout << "Array is :: << arr[i] << endl
  => for 2D array: for(i = 0 : m) for(j = 0 : n) res = arr[i][j] here later cout << result
  
b. Traverse in an string : for( i = 0 : strlen(str)) - > Here you check whether str[i] != '\0' then do cout for results

//6. Imporant:
1. Swap function has 0(1) time complexity
