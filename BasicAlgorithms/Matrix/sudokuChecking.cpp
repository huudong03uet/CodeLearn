#include <iostream>
#include <vector>
using namespace std;
int arr[256];
bool sudokuChecking(std::vector<std::vector<char>> grid)
{
    if(grid.size() == 0 || grid[0].size() == 0) return false;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(grid[i][j] <= '9' && grid[i][j] >= '1')
            {
                if(arr[grid[i][j]] == 1) return false;
                else arr[grid[i][j]]++;
            }
        }
        for(int index = 0; index <= 255; index++) arr[index] = 0;
    }
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(grid[j][i] <= '9' && grid[j][i] >= '1')
            {
                if(arr[grid[j][i]] == 1) return false;
                else arr[grid[j][i]]++;
            }
        }
        for(int index = 0; index <= 255; index++) arr[index] = 0;
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int x = i * 3; x < (i + 1) * 3; x++)
            {
                for(int y = j * 3; y < (j + 1) * 3; y++)
                {
                    if(grid[x][y] <= '9' && grid[x][y] >= '1')
                    {
                        if(arr[grid[x][y]] == 1) return false;
                        else arr[grid[x][y]]++;
                    }
                }
            }
            for(int index = 0; index <= 255; index++) arr[index] = 0;
        }
    }
    return true;
}