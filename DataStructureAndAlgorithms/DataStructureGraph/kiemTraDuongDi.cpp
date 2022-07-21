#include <iostream>
#include <vector>

bool visited[100001];
bool matrix[1001][1001];
bool check_ = false;

void dfs(int u, int v, int n)
{
    visited[u] = true;
    for(int i = 1; i <= n; i++)
    {
        if(matrix[u][i] == true && visited[i] == false)
        {
            if(i == v) {
                check_ = true;
            }
            dfs(i, v, n);
            visited[i] = false;
        }
    }
}
bool check(int n, std::vector<std::vector<int>> e, int u, int v)
{
    for(int i = 0; i <= n; i++) {
        visited[i] = false;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            matrix[i][j] = false;
        }
    }
    for(int i = 0; i < e.size(); i++)
    {
        matrix[e[i][0]][e[i][1]] = true;
    }
    dfs(u, v, n);
    return check_;
}