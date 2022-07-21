#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m; cin >> n;
    int* arr1 = new int[n];
    for(int i = 0; i < n; i++) cin >> arr1[i];

    cin >> m;
    int* arr2 = new int[m];
    for(int j = 0; j < m; j++) cin >> arr2[j];
    
    int* arr = new int[n + m];
    int index1 = 0, index2 = 0;
    while(index1 < n && index2 < m)
    {
        if(arr1[index1] < arr2[index2]) 
        {   
            arr[index1 + index2] = arr1[index1];
            index1++;
        }
        else if(arr1[index1] >= arr2[index2]) 
        {   
            arr[index1 + index2] = arr2[index2];
            index2++;
        }
    }
    while(index1 < n)
    {
        arr[index1 + index2] = arr1[index1];
        index1++;
    }
    while(index2 < m)
    {
        arr[index1 + index2] = arr2[index2];
        index2++;
    }
    for(int i = 0; i < n + m; i++) cout << arr[i] << " ";
    delete[] arr1;
    delete[] arr2;
    return 0;
}