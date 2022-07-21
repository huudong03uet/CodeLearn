#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    stack<char> st;
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
        st.push(s[i]);
    while(st.size() != 0)
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}