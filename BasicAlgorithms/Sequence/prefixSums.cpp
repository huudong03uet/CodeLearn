#include <vector>
using namespace std;
std::vector<int> prefixSums(std::vector<int> a)
{
    vector<int> result;
    result.push_back(a[0]);
    for(int i = 1; i < a.size(); i++)
    {
        int prefix_ = a[i] + result[i - 1];
        result.push_back(prefix_);
    }
    return result;
}