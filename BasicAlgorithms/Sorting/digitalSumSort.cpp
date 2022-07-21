#include <vector>
using namespace std;
int sumDigit(int n)
{
    int result = 0;
    while(n)
    {
        result += n % 10;
        n /= 10;
    }
    return result;
}
std::vector<int> digitalSumSort(std::vector<int> a)
{
    vector<int> v;
    for(int i = 0; i < a.size(); i++)
    {
        v.push_back(sumDigit(a[i]));
    }
    for(int i = 0; i < a.size(); i++)
        for(int j = i + 1; j < a.size(); j++)
        {
            if((v[i] > v[j]) || (v[i] == v[j] && a[i] > a[j]))
            {
                swap(v[i], v[j]);
                swap(a[i], a[j]);
            } 
        }
    return a;
}