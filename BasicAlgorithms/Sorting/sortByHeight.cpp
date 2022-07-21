#include <vector>
#include <algorithm>
using namespace std;

void quickSort(int l, int r, vector<int>& a)
{
    if(l >= r) return;
    int i = l, j = r, x = a[(i + j) / 2];
    while(i <= j)
    {
        while(i <= r && a[i] < x) i++;
        while(j >= l && a[j] > x) j--;
        if(i <= j)
        {
            swap(a[i], a[j]);
            i++; j--;
        }
    }
    quickSort(l, j, a);
    quickSort(i, r, a);
}

std::vector<int> sortByHeight(std::vector<int> a)
{
    vector<int> v;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != -1) v.push_back(a[i]);
    quickSort(0, v.size() - 1, v);
    int cnt = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] != -1)
        {
            a[i] = v[cnt];
            cnt++;
        }
    }
    return a;
}