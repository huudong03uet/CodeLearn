#include <string>
#include <vector>
using namespace std;
bool checkThreeString(string a, string b, string result)
{
    for(int i = 0;  i < result.length(); i++)
        if(result[i] != a[i] && result[i] != b[i]) return false;
    return true;
}
int stringsCrossover(std::vector<string> inputArray, string result)
{
    int cnt = 0;
    for(int i = 0; i < inputArray.size(); i++)
        for(int j = i + 1; j < inputArray.size(); j++)
            if(checkThreeString(inputArray[i], inputArray[j], result)) cnt++;

    return cnt;
}