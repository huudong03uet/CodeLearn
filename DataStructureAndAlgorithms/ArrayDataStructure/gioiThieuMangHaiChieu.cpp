#include <iostream>
using namespace std;
int main(){
    int n, m, sum = 0; cin >> n >> m;
    for(int i = 0; i < n * m; i++)
    {
        int number_; cin >>number_;
        sum += number_;
    }
    cout << sum;
    return 0;
}