#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

std::vector<int> sortArray(std::vector<int> arr)
{
    for(int i = 0; i < arr.size(); i++)
        for(int j = 0; j < arr.size() - 1 - i; j++)
            if(arr[j + 1] < arr[j]) swap(arr[j + 1], arr[j]);
    return arr;
}