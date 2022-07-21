#include <string>
using namespace std;
string lineEncoding(string s)
{
    string result;
    int cnt = 1;
    s += " ";
    for(int i = 0; i < s.length() - 1; i++)
        if(s[i] == s[i + 1]) cnt++;
        else
        {
            if(cnt > 1)
            {
                result += to_string(cnt);
            }
            result += s[i];
            cnt = 1;
        }
    return result;
}