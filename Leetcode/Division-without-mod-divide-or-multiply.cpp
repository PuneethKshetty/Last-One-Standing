//Time complexity : 0(log(dividend) solution with 0(1) space complexity
long long divide(long long dividend, long long divisor)
{
    //First step: check for overflow
    if(dividend == INT_MIN && divisor == -1) {
      return INT_MAX;
    }

    //Next step find sign
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

    //Next step is to make both dividend and divisor positive 
    dividend = abs(dividend);
    divisor = abs(divisor);

    //Next step is to make quotient var
    long long quotient = 0;

    //Next step is to use for loop moving from most significant bit [31] to low significant bit[0]
    for(int i = 31;i >= 0; i--)
    {
        if((dividend << i) <= divisor)
        {
           divisor -= (dividend << i);
           quotient |= (1LL << i);
        }
    }

    return sign * quotient;
}
