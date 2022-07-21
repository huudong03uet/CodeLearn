#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    if(v[0] > 0)
    {
        cout << 0;
        return 0;
    }
    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] - v[i - 1] > 1)
        {
            cout << v[i - 1] + 1;
            return 0;
        }
    }
    cout << v[v.size() - 1] + 1;
    return 0;
}