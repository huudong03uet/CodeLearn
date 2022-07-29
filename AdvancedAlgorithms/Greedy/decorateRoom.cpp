#include <algorithm>
#include <vector>
using namespace std;
long long decorateRoom(int r, int g, int b)
{
    if(r == g && r == b) return r;
    vector<int> v = {r, g, b};
    sort(v.begin(), v.end());
    if(v[2] >= (v[1] + v[0]) * 2) return v[1] + v[0];
    return v[0] + (v[1] + v[2] - 2 * v[0]) / 3;
    
}