long long numberZeroDigits(long long n)
{
    long long cnt = 0;
    long long index = 5;
    while(index <= n)
    {
        cnt += n / index;
        index *= 5;
    }
    return cnt;
}