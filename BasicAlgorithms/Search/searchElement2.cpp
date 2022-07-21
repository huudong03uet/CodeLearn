#include <vector>
#include <set>

using namespace std;
int searchElement02(std::vector<std::vector<int>> a, int k)
{
    set<int> s;
    for(int i = 0; i < a.size(); i++)
        for(int j = 0; j < a[i].size(); j++)
            s.insert(a[i][j]);
    for(auto i : s)
    {
        k--;
        if(k == 0) return i;
    }
    return -1;
}