#include <iostream>
using namespace std;
int cnt = 0;
void convert(int n,int k)
{
    if(k == 0) cnt++;
    else
    {
        convert(n * 2, k - 1);
        if((n - 1) % 3 == 0 && (n - 1) / 3 % 2 == 1)
            convert((n - 1) / 3, k - 1);
    }
}
int main(){
    int n, k; cin >> n >> k;
    convert(n, k);
    cout << cnt;

    return 0;
}