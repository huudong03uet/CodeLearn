#include <vector>
using namespace std;

std::vector<std::vector<int>> spiralNumbers(int n)
{
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        vector<int> tmp;
        for (int j = 0; j < n; j++)
        {
            tmp.push_back(0);
        }
        v.push_back(tmp);
    }
    int left = 0, right = n;
    int cnt = 1;
    while (cnt <= n * n)
    {
        for (int i = left; i < right; i++)
        {
            v[left][i] = cnt;
            cnt++;
        }
        for (int i = left + 1; i < right; i++)
        {
            v[i][right - 1] = cnt;
            cnt++;
        }
        for (int i = right - 2; i >= left; i--)
        {
            v[right - 1][i] = cnt;
            cnt++;
        }
        for (int i = right - 2; i >= left + 1; i--)
        {
            v[i][left] = cnt;
            cnt++;
        }
        left++;
        right--;
    }
    return v;
}