#include <vector>
int maxFraction(std::vector<int> numerators, std::vector<int> denominators)
{
    int index_max = 0;
    
    for(int i = 0; i < numerators.size(); i++)
        if((numerators[index_max] * denominators[i] - denominators[index_max] * numerators[i]) * 1.0 / (denominators[index_max] * denominators[i]) < 0)
            index_max = i;
    return index_max;
}