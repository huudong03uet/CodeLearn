
#include <set>
using namespace std;
int differentValuesInMultiplicationTable2(int n, int m)
{
    set<int> s;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            s.insert(i * j);
    return s.size();
}