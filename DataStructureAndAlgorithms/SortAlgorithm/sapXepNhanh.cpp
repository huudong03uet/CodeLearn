#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void quickSort(int l, int r, vector<int>& v)
{
    int p = v[(l+r)/2];
    int i = l, j = r;
    while(i < j)
    {
        while(v[i] < p) i++;
        while(v[j] > p) j--;
        if(i <= j) {
            swap(v[i], v[j]);
            i++; j--;
        }
    }
    if(i < r) quickSort(i, r, v);
    if(j > l) quickSort(l, j, v);
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    quickSort(0, n - 1, v);
    for(int i = 0; i < n; i++) cout << v[i] << " ";
    return 0;
}