#include <vector>
#include <map>
using namespace std;
int arr[1000][1000];
int numberOfSubArray(std::vector<int> v)
{
    map<int, int> mp;
    for(int i = 0; i < v.size(); i++)
        for(int j = i; j < v.size(); j++)
        {
            if(j == i) arr[i][j] = v[j];
            else arr[i][j] = arr[i][j - 1] + v[j];
            mp[arr[i][j]]++;
        }
    int cnt_max = 0;
    for(auto i : mp) 
        if(cnt_max < i.second) cnt_max = i.second;
    return cnt_max;
}