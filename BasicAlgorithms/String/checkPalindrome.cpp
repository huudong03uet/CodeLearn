#include <string>
using namespace std;
bool checkPalindrome(string inputString)
{
    int length_string = inputString.length();
    for(int i = 0; i < length_string / 2; i++)
    {
        if(inputString[i] != inputString[length_string - i - 1])
            return false;
    }
    return true;
}