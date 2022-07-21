#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, k, x; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    cin >> k >> x;
    
    v.insert(v.begin() + k, x);
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    return 0;
}