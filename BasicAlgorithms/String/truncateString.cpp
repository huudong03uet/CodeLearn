#include <string>
using namespace std;
string truncateString(string s)
{
    while(s.length() != 0)
    {
        if((s[0] - '0') % 3 == 0)
        {
            s.erase(0, 1);
        }
        else if((s[s.length() - 1] - '0') % 3 == 0)
        {
            s.pop_back();
        }
        else if((s[0] + s[s.length() - 1] - '0' * 2) % 3 == 0)
        {
            s.pop_back();
            s.erase(0, 1);
        }
        else
        {
            break;
        }
    }
    return s;
}