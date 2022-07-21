#include <iostream>
#include <vector>
using namespace std;
void merge(int* arr, int l, int m, int r)
{
    int long1 = m - l + 1;
    int long2 = r - m;

    int arr1[long1], arr2[long2];
    for(int i = 0; i < long1; i++) arr1[i] = arr[l + i];
    for(int i = 0; i < long2; i++) arr2[i] = arr[l + long1 + i];

    int index1 = 0, index2 = 0, index = l;
    while(index1 < long1 && index2 < long2)
    {
        if(arr1[index1] < arr2[index2])
        {
            arr[index] = arr1[index1];
            index1++;
        }
        else
        {
            arr[index] = arr2[index2];
            index2++;
        }
        index++;
    }
    while(index1 < long1)
    {
        arr[index] = arr1[index1];
        index1++;
        index++;
    }
    while(index2 < long2)
    {
        arr[index] = arr2[index2];
        index2++;
        index++;
    }
}

void mergeSort(int* arr, int l, int r)
{
    if(r > l)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int main(){
    int n; cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";


    return 0;
}