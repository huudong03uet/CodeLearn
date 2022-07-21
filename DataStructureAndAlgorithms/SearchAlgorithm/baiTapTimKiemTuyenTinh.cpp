#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int number_;
    bool hasNULL = true;
    for(int i = 0; i < n; i++)
    {
        cin >> number_;
        if(i % 2 == 0 && number_ % 2 == 1)
        {
            hasNULL = false;
            cout << number_ << " ";
        }
    }
    if(hasNULL == true) cout << "NULL";
    return 0;
}