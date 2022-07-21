#include <string>
#include <iostream>
using namespace std;

string questionCorrection(string s)
{
    string result = s;
    for(int i = 0; i < result.length(); i++)
    {
        if(!isalnum(result[i]) && result[i] != ' ' && result[i] != ',')
            {
                result[i] = ' ';
            }
        if(isalpha(result[i])) result[i] = tolower(result[i]);
    }
    for(int i = 0; i < result.length(); i++)
        if(result[i] == ',' && result[i + 1] != ' ') result.insert(i + 1, " ");

    while(!isalnum(result[0]))
    {
        result.erase(0, 1);
    }

    while(!isalnum(result.back()))
    {
        result.pop_back();
    }


    while(result.find("  ") != -1)
    {
        result.erase(result.find("  "), 1);
    }
    while(result.find(" ,") != -1)
    {
        result.erase(result.find(" ,"), 1);
    }
    while(result.find(",,") != -1)
    {
        result.erase(result.find(",,"), 1);
    }
    
    if(isalpha(result[0])) result[0] = toupper(result[0]);
    return result + '?';
}

