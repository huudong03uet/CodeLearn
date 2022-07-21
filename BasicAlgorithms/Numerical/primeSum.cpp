#include <cmath>
int arr[10000001];
int primeSum(int n)
{
    for(int i = 2; i <= n; i++) arr[i] = 1;
    for(int i = 2; i <= sqrt(n); i++)
        if(arr[i] == 1) 
            for(int j = i * i; j <= n; j += i)
                arr[j] = 0;
    int sum = 0;
    for(int i = 2; i <= n; i++)
        if(arr[i] == 1) 
        {
            sum += i;
            sum %= 22082018;
        }
    return sum;
}