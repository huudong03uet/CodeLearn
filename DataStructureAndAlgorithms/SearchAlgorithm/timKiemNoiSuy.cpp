#include <iostream>
#include <vector>
using namespace std;
int interpolationSearch(vector<int> v, int n, int x)
{
    int l = 0, r = n - 1;
    while(v[r] != v[l] && x >= v[l] && x <= v[r])
    {
        int mid = l + (r - l) * (x - v[l]) / (v[r] - v[l]);
        if(v[mid] < x)
        {
            l = mid + 1;
        }
        else if(v[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            if(mid > 0 && v[mid - 1] == x) r = mid - 1;
            else return mid;
        }
    }
    if(v[l] == x) return l;
    return -1;
}
int main(){
    int n, s; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    cin >> s;
    cout << interpolationSearch(v, n, s);
    return 0;
}