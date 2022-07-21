#include <iostream>
using namespace std;
int arr[11];
int n;
void printArr(int k)
{
    for(int i = 1; i <= k; i++) cout << arr[i];
    cout << " ";
}

void solution(int h, int k)
{
    for(int i = arr[h - 1] + 1; i <= n - (k - h); i++)
    {
        arr[h] = i;
        if(h == k) printArr(k);
        else solution(h + 1, k);
    }
}

int main(){
    int k; cin >> n >> k;
    arr[0] = 0;
    solution(1, k);

    return 0;
}