#include <algorithm>
#include <vector>
using namespace std;

int maximizeSum(std::vector<int> arr)
{
    vector<int>v = arr;
    sort(arr.begin(), arr.end());
    sort(v.begin(), v.end(), greater<int>());
    int sum = 0;
    for(int i = 0; i < v.size(); i++)
        sum += abs(v[i] - arr[i]);
    return sum;
}