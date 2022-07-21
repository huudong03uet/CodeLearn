#include <string>
using namespace std;
bool checkStrongPassword(string password)
{
    bool arr[10];
    for(int i = 0; i < 6; i++) arr[i] = false;

    if(password.length() < 6) return false;
    for(int i = 0; i < password.length(); i++)
    {
        if(isdigit(password[i])) arr[0] = true;
        if(isupper(password[i])) arr[1] = true;
        if(islower(password[i])) arr[2] = true;
        if(!isdigit(password[i]) && !isalpha(password[i])) arr[3] = true;
    }
    for(int i = 0; i < 4; i++)
        if(arr[i] == false) return false;
    return true;
}