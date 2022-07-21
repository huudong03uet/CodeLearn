#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

std::vector<string> bishopDiagonal1(string bishop1, string bishop2)
{
    if(bishop1 > bishop2) swap(bishop1, bishop2);
    if(abs(bishop1[0] - bishop2[0]) != abs(bishop1[1] - bishop2[1]))
    {
        
    }
    else
    {
        if(bishop1[0] - bishop2[0] == bishop1[1] - bishop2[1])
        {
            while(bishop1[0] > 'a' && bishop1[1] > '1' && bishop1[0] < 'h' && bishop1[1] < '8')
            {
                bishop1[0] = (char) bishop1[0] - 1;
                bishop1[1] = (char) bishop1[1] - 1;
            }
            while(bishop2[0] > 'a' && bishop2[1] > '1' && bishop2[0] < 'h' && bishop2[1] < '8')
            {
                bishop2[0] = (char) bishop2[0] + 1;
                bishop2[1] = (char) bishop2[1] + 1;
            }            
        }
        else
        {
            while(bishop1[0] > 'a' && bishop1[1] > '1' && bishop1[0] < 'h' && bishop1[1] < '8')
            {
                bishop1[0] = (char) bishop1[0] - 1;
                bishop1[1] = (char) bishop1[1] + 1;
            }
            while(bishop2[0] > 'a' && bishop2[1] > '1' && bishop2[0] < 'h' && bishop2[1] < '8')
            {
                bishop2[0] = (char) bishop2[0] + 1;
                bishop2[1] = (char) bishop2[1] - 1;
            } 
        }
    }
    
    vector<string> result;
    result.push_back(bishop1);
    result.push_back(bishop2);
    return result;
}

std::vector<std::string> bishopDiagonal(std::string bishop1, std::string bishop2)
{
    if (bishop1 > bishop2) swap(bishop1, bishop2);
    if (abs(bishop1[0] - bishop2[0]) != abs(bishop1[1] - bishop2[1])){
        return{bishop1 ,bishop2};
    }
    if (bishop1[1] < bishop2[1]){
        while (bishop1[0] != 'a' && bishop1[1] != '1'){
            bishop1[0]--;
            bishop1[1]--;
        }
        while (bishop2[0] != 'h' && bishop2[1] != '8'){
            bishop2[0]++;
            bishop2[1]++;
        }
        return{bishop1, bishop2};
    }
    else{
        while (bishop1[0] != 'a' && bishop1[1] != '8'){
            bishop1[0]--;
            bishop1[1]++;
        }
        while (bishop2[0] != 'h' && bishop2[1] != '1'){
            bishop2[0]++;
            bishop2[1]--;
        }
        return{bishop1, bishop2};
    }
}

