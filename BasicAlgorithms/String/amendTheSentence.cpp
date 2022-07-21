#include <string>
using namespace std;
string amendTheSentence(string s)
{
    string result;
    for(int i = 0; i < s.length(); i++)
    {
        if(i != 0 && isupper(s[i]))
        {
            result.push_back(' ');
            result.push_back(tolower(s[i]));
        }
        else if(isupper(s[i]))
        {
            result.push_back(tolower(s[i]));
        }
        else
        {
            result.push_back(s[i]);
        }
    }
    return result;
}