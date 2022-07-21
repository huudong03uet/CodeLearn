#include <string>
#include <vector>
#include <string>
using namespace std;
std::vector<string> sortByLength(std::vector<string> inputArray)
{
    for(int i = 0; i < inputArray.size(); i++)
        for(int j = 0; j < inputArray.size() - i - 1; j++)
            if(inputArray[j].length() > inputArray[j + 1].length())
            {
                swap(inputArray[j], inputArray[j + 1]);
            }
    return inputArray;
}