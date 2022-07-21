#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    int max_brick = v[0];
    int col = 1;
    for(int i = 1; i < v.size(); i++)
    {
        max_brick--;
        if(max_brick > v[i]) v[i] = max_brick;

        col++;
        if(max_brick == 0) break;
    }
    cout << col;
    return 0;
}