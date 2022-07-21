#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void quickSort(vector<int>& v, int l, int r)
{
    int pivot = v[(l + r) / 2], i = l, j = r;
    while(i < j)
    {
        while(v[i] < pivot) i++;
        while(v[j] > pivot) j--;
        if(i < j)
        {
            swap(v[i], v[j]);
            i++; j--;
        }
    }
    if(i < r) quickSort(v, i, r);
    if(j > l) quickSort(v, l, j);
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    quickSort(v, 0, n - 1);
    // int cnt = 1;
    // for(int i = 1; i < n; i++)
    // {
    //     if(v[i] == v[i - 1]) cnt++;
    //     else
    //     {
    //         cout << v[i] << " " << cnt << "; ";
    //         cnt = 1;
    //     }
    // }
    // cout << v[n - 1] << " " << cnt << "; ";

    return 0;
}