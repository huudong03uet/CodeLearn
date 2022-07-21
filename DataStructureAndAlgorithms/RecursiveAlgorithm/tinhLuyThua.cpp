#include <iostream>
using namespace std;
long long pow(long long a,long long b)
{
    long long result = 1;
    while(b)
    {
        if(b % 2 == 1)  result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}
int main()
{
    long long a, b; cin >> a >> b;
    cout << pow(a, b);
    return 0;
}