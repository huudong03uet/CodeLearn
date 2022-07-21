#include <iostream>
using namespace std;
int a[10001], b[10001], t[10001], result[10001];
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) b[i] = 1;

    for(int i = 1; i < n; i++)
        for(int j = 0; j < i; j++)
        {
            if(a[i] >= a[j] && b[j] + 1 > b[i])
            {
                b[i] = b[j] + 1;
                t[i] = j;
            }
        }
    
    int max_ = 0;
    for(int i = 1; i < n; i++)
    {
        if(b[max_] < b[i]) max_ = i;
    }

    int k = b[max_];
    for(int i = k - 1; i >= 0; i--)
    {
        result[i] = a[max_];
        max_ = t[max_];
    }
    for(int i = 0; i < k; i++) cout << result[i] << " ";
    return 0;
}