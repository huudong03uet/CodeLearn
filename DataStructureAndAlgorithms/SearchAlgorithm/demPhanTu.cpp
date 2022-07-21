#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0, number_; cin >> number_;
    for(auto &i : v)
    {
        if(number_ == i) cnt++;
    }
    cout<< cnt;
    return 0;
}