#include <iostream>
#include <vector>
using namespace std;
void shellSort(vector<int>& v, int n)
{
    int i, j;
    for(int interval = n / 2; interval > 0; interval /= 2)
    {
        for(i = interval; i < n; i++)
        {
            int tmp = v[i];
            for(j = i; j >= interval && v[j - interval] > tmp; j -= interval)
            {
                v[j] = v[j - interval];
            }
            v[j] = tmp;
        }
    }
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    shellSort(v, n);
    for(int i = 0; i < n; i++) cout << v[i] << " ";
    return 0;
}