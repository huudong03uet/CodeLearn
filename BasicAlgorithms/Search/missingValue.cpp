#include <vector>
using namespace std;

std::vector<int> missingValue(std::vector<int> a, std::vector<int> b)
{
    vector<int> result;
    for(int i = 0; i < b.size(); i++)
    {
        bool isTrue = true;
        for(int j = 0; j < a.size(); j++)
            if(b[i] == a[j]) isTrue = false;
        
        if(isTrue == true) result.push_back(b[i]);
    }
    return result;
}