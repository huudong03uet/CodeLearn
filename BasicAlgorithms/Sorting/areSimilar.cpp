#include <vector>

bool areSimilar(std::vector<int> a, std::vector<int> b)
{
    int index_1 = -1, index_2 = -1;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
        {
            if(index_1 == -1) index_1 = i;
            else if(index_2 == -1) index_2 = i;
            else return false;
        }
    if(b[index_1] == a[index_2] && b[index_2] == a[index_1]) return true;
    return false;
}