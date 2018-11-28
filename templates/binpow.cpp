long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)                          //Bitwise operator, true if the lcb of 'b' is 1, (if b = odd)
            res *= a;                  //now b=even
        a *= a;                             //squaring at each step
        b >>= 1;                            //Right shift, thus dividing b by 2
    }
    return res;
}
