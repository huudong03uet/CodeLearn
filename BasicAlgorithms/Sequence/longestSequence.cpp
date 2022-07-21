#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestSequence(std::vector<int> a)
{
    int max = 1;
    int idx  = 0;
    for (int i = 0; i < a.size(); i++)
        for (int j = i + 1; j < a.size(); j++)
        {
            int space = a[j] - a[i];
            int cnt = 1;
            bool checkNumber = true;
            idx = j;
            while (checkNumber == true)
            {
                cnt++;
                space += (a[j] - a[i]);

                checkNumber = false;
                for (int index = idx + 1; index < a.size(); index++)
                    if (a[index] == a[i] + space){
                         checkNumber = true;
                         idx = index;
                    }
            }
            if (cnt > max) max = cnt;
        }
    return max;
}

int main() {
    vector<int> v = { 4, 1, 2, 4, 3, 5, 4, 6 };
    cout << longestSequence(v);
    return 0;
}