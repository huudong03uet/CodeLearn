#include <vector>

bool isArithmeticProgression(std::vector<int> sequence)
{
    for(int i = 2; i < sequence.size(); i++)
        if(sequence[i] - sequence[i - 1] != sequence[i - 1] - sequence[i - 2]) return false;
    return true;
}