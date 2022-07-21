#include <vector>
using namespace std;
bool beautifulArray(std::vector<int> arr)
{
    vector<int> s;
    s.push_back(arr[0]);
    for(int i = 1; i < arr.size(); i++)
    {
        s.push_back(s[s.size() - 1] + arr[i]);
    }
    for(int i = 1; i < s.size() - 1; i++)
        if(s[i - 1] == s[s.size() - 1] - s[i]) return true;
    return false;
}