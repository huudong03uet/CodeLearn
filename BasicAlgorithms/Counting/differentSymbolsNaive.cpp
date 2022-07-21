#include <string>
#include <set>
using namespace std;

int differentSymbolsNaive(string s)
{
    set<char> se;
    for(int i = 0; i < s.length(); i++)
        se.insert(s[i]);
    return se.size();
}