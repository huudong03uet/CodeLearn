#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n; cin >>n;
    stack<int> s;
    do {
        s.push(n % 2);
        n /= 2;
    } while(n);

    while(s.size() != 0)
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}