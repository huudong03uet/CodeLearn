#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void quickSort(int l, int r, vector<int>& v)
{
    int i = l, j = r, pivot = v[(l + r) / 2];
    while(i < j)
    {
        while(v[i] < pivot) i++;
        while(v[j] > pivot) j--;
        if(i <= j)
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    if(i < r) quickSort(i, r, v);
    if(j > l) quickSort(l, j, v);
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
		cin >> v[i];
	}
    quickSort(0, n - 1, v);
    int k = 1;
    int day_min = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        if(v[i] + k > day_min) day_min = v[i] + k;
        k++;
    }
    cout << day_min;
    return 0;
}