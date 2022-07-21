#include <vector>

int arr[100];
bool isTournament(int n, std::vector<int> fromV, std::vector<int> toV)
{
    for(int i = 0; i < fromV.size(); i++)
    {
        arr[fromV[i]]++;
        arr[toV[i]]++;
    }
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] != n - 1) return false;
    }
    return true;
}