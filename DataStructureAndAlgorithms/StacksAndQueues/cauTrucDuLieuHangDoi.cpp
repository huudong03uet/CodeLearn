#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        q.push(tmp);
    }
    int k; cin >> k;
    for(int i = 0; i < k; i++)
    {
        q.push(q.front());
        q.pop();
    }
    while (q.empty() == false)
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}