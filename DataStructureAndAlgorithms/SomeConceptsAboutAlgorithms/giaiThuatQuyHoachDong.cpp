#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int l = 0, index_max = 0, length_max = 1, length = 1;
    for(int i = 1; i < n; i++)
    {
        if(v[i] >= v[i - 1]) {
            length++;
        } 
        else if (length > length_max)
        {
            length_max = length;
            index_max = l;

            l = i;
            length = 1;
        } else {
            l = i;
            length = 1;
        }
    }
    if (length > length_max)
        {
            length_max = length;
            index_max = l;
        }
    for(int i = index_max; i < length_max + index_max; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}