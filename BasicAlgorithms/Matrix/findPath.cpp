#include <iostream>
#include <vector>
using namespace std;
bool findPath(std::vector<std::vector<int>> matrix)
{
    int x = 0, y = 0;
    for(int i = 0; i < matrix.size(); i++)
        for(int j = 0; j < matrix[i].size(); j++)
            if(matrix[i][j] == 1)
            {
                x = i;
                y = j;
            }
    int cnt = 2;
    int x_new = 0;
    int y_new = 0;
    while(cnt <= matrix.size() * matrix[0].size())
    {
        for(int i = 0; i < matrix.size(); i++)
            for(int j = 0; j < matrix[i].size(); j++)
                if(matrix[i][j] == cnt)
                {
                    x_new = i;
                    y_new = j;
                }
        if(abs(x_new - x) == 1 && abs(y_new - y) == 1) return false;
        else if(abs(x_new - x) == 1 || abs(y_new - y) == 1)
        {
            x = x_new;
            y = y_new;
            cnt++;
        }
        else return false;

    }
    return true;
}