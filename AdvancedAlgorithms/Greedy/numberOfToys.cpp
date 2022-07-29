#include <vector>
#include <algorithm>
int numberOfToys(std::vector<int> arr, int k)
{
    sort(arr.begin(), arr.end());
    int cnt = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(k - arr[i] >= 0) {
            k -= arr[i];
            cnt++;
        }
        else break;
    }
    return cnt;
}