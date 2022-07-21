#include <vector>
#include <queue>
using namespace std;
int componentSize(std::vector<std::vector<bool>> matrix, int vertex)
{
    int cnt = 1;
    int n = matrix.size();
    int visit[10000] = {0};
    queue<int> qu;
    visit[vertex] = 1; qu.push(vertex);
    while(qu.size() != 0)
    {
        int u = qu.front(); qu.pop();
        for(int v = 0; v < n; v++)
        {
            if(matrix[v][u] == 1 && visit[v] == 0)
            {
                visit[v] = 1; qu.push(v);
                cnt++;
            }
        }
    }
    return cnt;
}