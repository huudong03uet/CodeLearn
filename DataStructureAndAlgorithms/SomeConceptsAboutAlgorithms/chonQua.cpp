#include <iostream>
#include <vector>
using namespace std;
int s[100001][2];
int chooseGifts(vector<int>& v, int n)
{
    for(int i = 0; i < n; i++)
    {
        s[i][0] = v[i];
        s[i][1] = -1;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(v[j] == v[i] && s[j][0] + v[i] > s[i][1])
            {
                s[i][1] = s[j][0] + v[i];
            }
        }
        for(int j = 0; j < i; j++)
        {
            if(s[j][1] + v[i] > s[i][0])
            {
                s[i][0] = s[j][1] + v[i];
            }
        }
    }
    int max = -1;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < 2; j++)
            if(s[i][j] > max) max = s[i][j];
    return max;
}

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    cout << chooseGifts(v, n);
    return 0;
}