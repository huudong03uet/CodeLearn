#include <string>
#include <iostream>
#include <cmath>
using namespace std;
int pagesNumbering(int n)
{
    string s = to_string(n);
    int result = 0;
    for(int i = 1; i < s.length(); i++)
        result += 9 * pow(10, i - 1) * i;
    return result + (n - pow(10, s.length() - 1) + 1) * s.length();
}
int main(){
    cout << pagesNumbering(11);
    return 0;
}