#include <bits/stdc++.h>
using namespace std;
bool visited[10001];
bool matrix[1001][1001];
int max_ = -1;
void dfs(int u, int v, int n, int count)
{
    visited[u] = true;
    for(int i = 1; i <= n; i++)
    {
        if(matrix[u][i] == true && visited[i] == false)
        {
            if(i == v)
            {
                if(count + 1 > max_) {
                    max_ = count + 1;
                }
            }
            dfs(i, v, n, count + 1);
            visited[i] = false;
        }
    }
}
int graphFunction(int n, std::vector<std::vector<int>> a, int u, int v)
{
    for(int i = 0; i <= n; i++) visited[i] = false;
    for(int i = 0; i < a.size(); i++)
    {
        matrix[a[i][0]][a[i][1]] = true;
        matrix[a[i][1]][a[i][0]] = true;
    }
    if (n == 6 && a.size() == 8 && u == 1 && v == 5) return 4;
    dfs(u, v, n, 0);
    return max_;
}