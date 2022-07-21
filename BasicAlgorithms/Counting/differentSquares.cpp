#include <set>
#include <vector>
#include <string>
using namespace std;
int differentSquares(std::vector<std::vector<int>> matrix)
{
    set<string> v;
    for(int i = 0; i < matrix.size() - 1; i++)
    {
        for(int j = 0; j < matrix[i].size() - 1; j++)
        {
            string tmp;
            tmp += (to_string(matrix[i][j]) + to_string(matrix[i][j + 1]) + to_string(matrix[i + 1][j]) + to_string(matrix[i + 1][j + 1]));
            v.insert(tmp);
        }
    }
    return v.size(); 
}