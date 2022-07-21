#include <iostream>
#include <string>
using namespace std;

int arr_s1[255];
int arr_s2[255];
int commonCharacterCount(string s1, string s2)
{
    int cnt = 0;
    for(int i = 0; i < s1.length(); i++) arr_s1[s1[i]]++;
    for(int i = 0; i < s2.length(); i++) arr_s2[s2[i]]++;
    for(int i = 0; i < 255; i++)
        cnt += min(arr_s1[i], arr_s2[i]);
    return cnt;
}

int main(){

    cout << commonCharacterCount("aaa", "aab");
}