#include <vector>
using namespace std;
int countPlace(std::vector<int> a, int k)
{
    int cnt = 0;
    for(int l = 0; l < a.size(); l++)
    {
        if(a[a.size() - 1] - a[l] <= 2 * k) 
        {
            cnt++;
            break;
        }
        int r = l;

        while(a[r] - a[l] <= k) r++;
        r--;

        while(a[l] - a[r] <= k) l++;
        l--;
        cnt++;

        
    }
    return cnt;
}