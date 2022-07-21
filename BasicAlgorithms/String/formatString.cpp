#include <bits/stdc++.h>
#include <sstream>
using namespace std;
string formatString(string input)
{
    stringstream ss(input);
    string result;
    string tmp;
    while(ss >> tmp)
    {
        result += (tmp + " ");
    }
    result.pop_back();
    return result;
}

int main()
{
    cout << formatString("aa     aaa  aa aaaaa");
    return 0;
}