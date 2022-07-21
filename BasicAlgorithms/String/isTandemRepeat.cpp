#include <string>
using namespace std;
bool isTandemRepeat(string inputString)
{
    if(inputString.length() % 2 == 1) return false;
    for(int i = 0; i < inputString.length() / 2; i++)
        if(inputString[i] != inputString[inputString.length() / 2 + i]) return false;
    return true;
}