# Here both positive and negative number is checked with overflow conditon also.
int reverse(int x) {
        int rev = 0;
        while(x != 0)
        {
            int rem = x % 10;
            if((rev < (INT_MIN/10)) || (rev > (INT_MAX/10))) { return 0;} // overflow[rev signed overflow
            rev = (rev * 10) + rem;
            x = x / 10;
        }
        return rev;
    }
