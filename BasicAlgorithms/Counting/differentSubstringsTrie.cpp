#include <set>
#include <string>
using namespace std;
int differentSubstringsTrie(string inputString)
{
    set<string> s;
    for(int i = 0; i < inputString.length(); i++)
        for(int j = 1; j <= inputString.length() - i; j++)
        {
            s.insert(inputString.substr(i, j));
        }
    return s.size();
}