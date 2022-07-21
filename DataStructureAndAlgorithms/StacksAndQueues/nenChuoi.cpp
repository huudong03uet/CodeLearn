#include <iostream>
#include <string>
using namespace std;
int main(){
    string s; cin >> s;
    int cnt = 1;
    for(int i = 0; i < s.length() - 1; i++)
    {
        if(s[i] != s[i + 1])
        {
            cout << s[i] << cnt;
            cnt = 1;
        } else {
            cnt++;
        }
    }
    if(s[s.length() - 1] == s[s.length() - 2]) cout << s[s.length() - 1] << ++cnt;
    else cout << s[s.length() - 1] << 1;
    return 0;
}