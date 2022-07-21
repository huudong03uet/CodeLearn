#include <map>
#include <vector>
using namespace std;

bool checkEqualFrequency(std::vector<int> inputArray)
{
    map<int, int> mp;
    for(int i = 0; i < inputArray.size(); i++)
        mp[inputArray[i]]++;
    
    int cnt = 0, f_ = 0;
    for(auto i : mp)
    {
        if(cnt != 0)
        {
            if(f_ != i.second) return false;
        }
        else
        {
            f_ = i.second;
        }
        cnt++;
    }
    return true;
}

