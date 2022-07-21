#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n; cin >> n;
    for(long long i = 2; i < 100; i++)
        if(pow(2, i) > n)
        {
            cout << i;
            return 0;
        }
    return 0;
}