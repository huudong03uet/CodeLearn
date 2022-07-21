#include <string>
using namespace std;
bool arr[256];
bool isPangram(string sentence)
{
    for(int i = 0; i < sentence.length(); i++)
        arr[tolower(sentence[i])] = true;
    for(int i = 'a'; i <= 'z'; i++)
        if(arr[i] == false) return false;
    return true;
}
