#include <iostream>
#include <vector>
using namespace std;
int cntNumber(int l, int r, int number_, vector<int>& v)
{
    if(l == r)
    {
        if(v[l] == number_) return 1;
        else return 0;
    }
    else
    {
        int mid = (l + r) / 2;
        return cntNumber(l, mid, number_, v) + cntNumber(mid + 1, r, number_, v);
    }
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int number_; cin >> number_;
    cout << cntNumber(0, n - 1, number_, v);
    return 0;
}