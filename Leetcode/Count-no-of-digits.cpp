/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int countDigits(int& n1)
{
   int count = 0;
   if(n1 == 0)
   {
       count = 1;
   }
   while(n1 != 0)
   {
       n1 = n1 / 10;
       count++;
   }
   return count;
}

int main()
{
    int n = 2000;
    std::cout << countDigits(n) << std::endl;

    return 0;
}
