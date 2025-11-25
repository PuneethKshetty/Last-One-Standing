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

//7. Functions [Pass by value and reference]
1. Pass by value: here we make a copy of a variable , original value of the variable wont be affected. Used for safety, Memory usage will be more because of copies creation.
2. Pass by reference : here we make a dont make a copy instead we modify the original variable, efficient, memory usage will be less compared to value

code:
// Pass by value:
#include<iostream>
using namespace std;

void modify(int a)
{
   a = a + 10;
}

int main()
{
  int x =5;
  modify(x); //Output will be 5 because only the copy of the variable is done hence original changes in the variable isnt gonna be affected
  return 0;
}

code:
// Pass by value:
#include<iostream>
using namespace std;

void modify(int &a)
{
   a = a + 10;
}

int main()
{
  int x =5;
  modify(x); //Output will be 15 because the original changes in the variable is gonna be affected.
  return 0;
}
