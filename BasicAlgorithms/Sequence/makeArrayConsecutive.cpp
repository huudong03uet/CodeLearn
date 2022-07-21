#include <vector>
#include <algorithm>
using namespace std;

std::vector<int> makeArrayConsecutive(std::vector<int> sequence)
{
    sort(sequence.begin(), sequence.end());
    int index_check = 0;
    vector<int> result;
    for(int i = sequence[0]; i <= sequence[sequence.size() - 1]; i++)
    {
        if(i == sequence[index_check]) index_check++;
        else result.push_back(i);
    }
    return result;
}