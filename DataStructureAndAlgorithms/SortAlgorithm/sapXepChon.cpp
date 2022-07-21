#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void selectionSort(vector<int>& v, int n)
{
    for(int i = 0; i < n; i++)
    {
        int index = i;
        for(int j = i + 1; j < n; j++)
        {
            if(v[j] < v[index]) index = j;
        }
        swap(v[i], v[index]);
    }
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    selectionSort(v, n);
    for(int i = 0; i < n; i++) cout << v[i] << " ";

    return 0;
}