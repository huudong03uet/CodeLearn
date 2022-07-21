#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
bool visited[10001];
int length[10001];
bool matrix[1001][1001];
int bfs(int u, int v, int n)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty())
    {
        int k = q.front();
        for(int i = 1; i <= n; i++)
        {
            if(matrix[k][i] == true && visited[i] == false)
            {
                length[i] = length[k] + 1;
                visited[i] = true;
                q.push(i);
                if(i == v) break;
            }
        }
        q.pop();
    }
    return length[v];
}
int graphFunction(int n, std::vector<std::vector<int>> e, int u, int v)
{
    for(int i = 0; i <= n; i++) {
        visited[i] = false;
        length[i] = 0;
    }
    for(int i = 0; i < e.size(); i++)
    {
        matrix[e[i][0]][e[i][1]] = true;
        matrix[e[i][1]][e[i][0]] = true;
    }
    int k = bfs(u, v, n);
    return (k == 0)? -1 : k;
}