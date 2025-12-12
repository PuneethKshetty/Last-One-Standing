class Solution {
  public:
    bool isPrime(int n) {
        // code here
       int cnt;
       bool flag;
       if(n<=1)
       {
           flag = false;
       }
       else
       {
           for(int i = 2; i * i <= n; i++)
           {
               if(n % i == 0)
               {
                   cnt++;
               }
           }
           
           if(cnt > 0)
           {
            flag = false;
           }
           else
           {
             flag = true;
           }
       }
       return flag;
    }
       
};
