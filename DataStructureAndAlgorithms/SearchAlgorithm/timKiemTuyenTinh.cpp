#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int number_; cin >> number_;
    
    int result = -1;
    for(int i = 0; i < n; i++)
        if(v[i] == number_)
        {

            cout << i;
            return 0;
        }
    cout << -1;
    return 0;
}