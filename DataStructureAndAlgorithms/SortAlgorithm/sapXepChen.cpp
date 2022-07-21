#include <iostream>
#include <vector>

using namespace std;
void insertSort(vector<int>& v, int n)
{
    for(int i = 1; i < n; i++)
    {
        int index = i, value = v[i];
        while(index > 0 && v[index - 1] > value)
        {
            v[index] = v[index - 1];
            index--;
        }
        v[index] = value;
    }
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    insertSort(v, n);
    for(int i = 0; i < n; i++) cout << v[i] << " ";
    return 0;
}