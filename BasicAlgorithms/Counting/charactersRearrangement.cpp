#include <string>
using namespace std;
int arr_1_[256];
int arr_2_[256];
bool charactersRearrangement(string string1, string string2)
{
    for(int i = 0; i < string1.length(); i++)
        arr_1_[string1[i]]++;
    for(int i = 0; i < string2.length(); i++)
        arr_2_[string2[i]]++;
    for(int i = 0; i < 256; i++)
        if(arr_1_[i] != arr_2_[i]) return false;

    return true;
}