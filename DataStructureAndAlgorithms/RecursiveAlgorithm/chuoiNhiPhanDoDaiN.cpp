#include <iostream>
#include <string>
using namespace std;
void stringResult(string s, int n)
{
    if(s.length() == n) cout << s << " ";
    else
    {
        stringResult(s + "0", n);
        stringResult(s + "1", n);
    }
}
int main()
{
    int n; cin >> n;
    stringResult("", n);
    return 0;
}