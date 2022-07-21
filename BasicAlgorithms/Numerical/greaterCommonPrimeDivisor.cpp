#include <cmath>
#include <iostream>
using namespace std;
int greatestCommonPrimeDivisor(int a, int b)
{
    int arr[100001];
    for(int i = 0; i <= 100000; i++) arr[i] = 1;
    for(int i = 2; i <= sqrt(100000); i++)
        if(arr[i] == 1)
            for(int j = i * i; j <= 100000; j += i)
                arr[j] = 0;
    int i = (a < b)? a : b;
    for(i ; i >= 2; i--)
        if(arr[i] == 1 && a % i == 0 && b % i == 0)
            return i;
    return -1;    
}

int main()
{
    cout << greatestCommonPrimeDivisor(12, 17);
}