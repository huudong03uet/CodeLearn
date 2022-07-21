#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> v, int n, int x)
{
    int l = 0, r = n - 1;
    while(l < r)
    {
        int mid = (l + r) / 2;
        if(v[mid] >= x) r = mid;
        else l = mid + 1;
    }
    if(v[l] == x) return l;
    return -1;
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int x; cin >> x;
    cout << binarySearch(v, n, x);
    return 0;
}