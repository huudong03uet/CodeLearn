#include <vector>
#include <queue>
using namespace std;
std::vector<int> bfsDistancesUnweightedGraph(std::vector<std::vector<bool>> matrix, int startVertex)
{
    int n = matrix.size();
    queue<int> q;

    bool visited[1000] = {0};
    int distance[1000] = {0};

    q.push(startVertex);
    visited[startVertex] = 1;

    while(q.size() != 0)
    {
        int u = q.front(); q.pop();
        for(int i = 0; i < n; i++)
        {
            if(distance[i] != 0 && distance[u] + 1 < distance[i] && matrix[i][u] == 1)
            {
                distance[i] = distance[u] + 1;
            }
            if(matrix[i][u] == 1 && visited[i] == 0)
            {
                q.push(i);
                distance[i] = distance[u] + 1;
                visited[i] = 1;
            }
        }
    }
    vector<int> result;
    for(int i = 0; i < n; i++) result.push_back(distance[i]);
    return result;
}