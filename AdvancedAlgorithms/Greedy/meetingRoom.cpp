#include <vector>
#include <algorithm>
using namespace std;
int mettingRoom(std::vector<int> s, std::vector<int> e)
{
    for(int i = 0; i < e.size(); i++) {
        for(int j = i + 1; j < e.size(); j++) 
            if(e[i] > e[j]) {
                swap(e[i], e[j]);
                swap(s[i], s[j]);
            }
    }
    int cnt = 1, first = 0;
    for(int last = 0; last < e.size(); last++) {
        if(s[last] >= e[first]) {
            first = last;
            cnt++;
        }
    }
    return cnt;
}