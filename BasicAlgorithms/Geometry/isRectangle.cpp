#include <vector>

bool isRectangle(std::vector<std::vector<int>> points)
{
    int arr[10];
    for(int i = 0; i < 4; i++)
    {
        int index = i + 1;
        if(index == 4) index = 0;
        
            arr[i] = (points[i][0] - points[index][0]) * (points[i][0] - points[index][0])
            + (points[i][1] - points[index][1]) * (points[i][1] - points[index][1]);
        
    }
    if(arr[1] == arr[3] && arr[2] == arr[0] && 
        ((points[0][0] - points[1][0]) * (points[0][1] - points[1][1]) + (points[2][0] - points[1][0]) * (points[2][1] - points[1][1])) == 0) return true;
    return false;
}