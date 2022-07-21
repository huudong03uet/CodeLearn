#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    int number_biggest = -1;
    int number_smallest = 100000000;
    int index_big = -1, index_small = -1;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] >= number_biggest) 
        {
            number_biggest = v[i];
            index_big = i;
        }
        if(v[i] < number_smallest) 
        {
            number_smallest = v[i];
            index_small = i;
        }
    }
    swap(v[index_big], v[index_small]);
    for(auto &i : v) cout << i << " ";
    return 0;
}