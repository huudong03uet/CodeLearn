#include <vector>

std::vector<int> alternatingSums(std::vector<int> a)
{
    int weight_1_ = 0;
    int weight_2_ = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(i % 2 == 0) weight_1_ += a[i];
        else weight_2_ += a[i];
    }
    return {weight_1_, weight_2_};
}