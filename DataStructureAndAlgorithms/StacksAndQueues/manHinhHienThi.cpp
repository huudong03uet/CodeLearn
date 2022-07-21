#include <iostream>
#include <queue>
using namespace std;
bool arr[100001];
int a[100001];
int main(){
    queue<int> q;
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    int k; cin >> k;
    for(int i = 0; i < n; i++)
    {
        if(k > 0 && arr[a[i]] == false)
        {
            q.push(a[i]);
            k--;
            arr[a[i]] = true;
        } 
        else if(arr[a[i]] == true)
        {

        } 
        else if(k == 0 && arr[a[i]] == false)
        {
            arr[q.front()] = false;
            arr[a[i]] = true;

            q.push(a[i]);
            q.pop();   
        }
    }
    while(q.size() != 0)
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}