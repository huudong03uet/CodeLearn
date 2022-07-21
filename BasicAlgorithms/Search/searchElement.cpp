#include <set>
#include <vector>
using namespace std;

int searchElement(std::vector<int> a, int n)
{
    set<int, greater<int>> s;
    for(int i = 0; i < a.size(); i++)
    {
        s.insert(a[i]);
    }
    for(auto i : s)
    {
        n--;
        if(n == 0) return i;
    }
    return -1;
}