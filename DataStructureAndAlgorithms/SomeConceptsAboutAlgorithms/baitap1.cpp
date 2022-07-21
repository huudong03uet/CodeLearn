#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int l[1001][1001];
string longestChainSymmetry(string s)
{
    string x = s;
    string y = s;
    reverse(y.begin(), y.end());
    int m = x.length(), n = y.length();
    x = " " + x;
    y = " " + y;
    
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(x[i] == y[j]) l[i][j] = l[i - 1][j - 1] + 1;
            else l[i][j] = max(l[i - 1][j], l[i][j - 1]);
        }
    }
    string result = "";
    while(l[m][n] > 0 && m > 0 && n > 0)
    {
        while(l[m - 1][n] == l[m][n]) m--;
        while(l[m][n] == l[m][n - 1]) n--;
        result = x[m] + result;
        m--;
        n--;
    }
    return result;
}
int main(){
    string s; cin >> s;
    cout << longestChainSymmetry(s);
    return 0;
}