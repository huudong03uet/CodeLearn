#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int number_)
{
    if(number_ <= 1) return false;
    if(number_ == 2 || number_ == 3) return true;
    for(int i = 2; i <= sqrt(number_); i++)
        if(number_ % i == 0) return false;
    return true;
}
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int number_; cin >> number_;
        if(isPrime(number_)) cout << number_ << " ";
    }
    return 0;
}