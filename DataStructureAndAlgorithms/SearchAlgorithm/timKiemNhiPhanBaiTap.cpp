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

void printArray(vector<int> v, int l, int r)
{
    for(int i = l; i <= r; i++) cout << v[i] << " ";
}

void solveSolution(vector<int> a, int n, int s)
{
    vector<int> b(n);
    b[0] = a[0];
    for(int i = 1; i < n; i++) b[i] = b[i - 1] + a[i];

    for(int i = 0; i < n; i++)
    {
        if(b[i] == s)
        {
            printArray(a, 0, i);
            return;
        }
        if(b[i] > s)
        {
            int pos = binarySearch(b, n, b[i] - s);
            if(pos != -1)
            {
                printArray(a, pos + 1, i);
                return;
            }
        }
    }
    cout << -1;
}
int main(){
    int n, s; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    cin >> s;
    solveSolution(v, n, s);
    return 0;
}