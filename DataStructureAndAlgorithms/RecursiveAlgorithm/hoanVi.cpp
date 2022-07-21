#include <iostream>
#include <string>
using namespace std;

int n;
bool mark[11];
int index_[11];

void printResult()
{
    for (int i = 0; i < n; i++) cout << index_[i];
    cout << " ";
}
void stringResult(int k)
{
    for (int i = 0; i < n; i++)
    {
        if (mark[i] == false)
        {
            mark[i] = true;
            index_[k] = i + 1;
            if (k + 1 == n) printResult();
            else stringResult(k + 1);
            mark[i] = false;
        }
    }
}
int main() {

    cin >> n;
    stringResult(0);
    return 0;
}