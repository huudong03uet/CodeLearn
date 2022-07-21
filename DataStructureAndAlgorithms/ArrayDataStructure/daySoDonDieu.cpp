#include <iostream>
#include <vector>
using namespace std;
bool solve()
{
    int n; cin >> n;
    if(n == 1) return true;
    if(n == 2) 
    {
        int a, b; cin >> a >> b;
        if(a != b) return true;
        return false;
    }
    int number_old_;
    cin >> number_old_;
    bool increase = 1;
    for(int i = 1; i < n; i++)
    {
        int number_new_; cin >> number_new_;
        if(i == 1)
        {
            if(number_new_ == number_old_) return false;
            if(number_new_ < number_old_) increase = 0;
            if(number_new_ > number_old_) increase = 1;
        }

        if(number_new_ == number_old_) return false;
        if(number_new_ < number_old_ && increase == 1) return false;
        if(number_new_ > number_old_ && increase == 0) return false;

        number_old_ = number_new_;
    }
    return true;
}
int main(){
    if(solve() == 1) cout << "YES";
    else cout << "NO";
    return 0;
}