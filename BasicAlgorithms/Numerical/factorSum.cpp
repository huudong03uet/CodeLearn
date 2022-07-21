int solve(int n)
{
    int k = 2, sum = 0;
    while(n != k)
    {
        if(n % k == 0)
        {
            sum += k;
            n /= k;
        }
        else
        {
            k++;
        }
    }
    sum += k;
    return sum;
}

int factorSum(int n)
{
    while(n != solve(n))
    {
        n = solve(n);
    }
    return n;
}