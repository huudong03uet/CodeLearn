#include <iostream>
using namespace std;
long long factor(long long n)
{
    if(n <= 1) return 1;
    else return n * factor(n - 1);
}
int main(){
    long long n; cin >> n;
    cout << factor(n);
    return 0;
}