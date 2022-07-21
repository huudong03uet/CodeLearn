#include <vector>

bool isMonotonous(std::vector<int> sequence)
{
    if(sequence.size() == 1) return true;
    if(sequence.size() == 2 && sequence[0] == sequence[1]) return false;
    if(sequence.size() == 2 && sequence[0] != sequence[1]) return true;

    bool isBiggerZero = 1;
    if(sequence[sequence.size() - 1] - sequence[0] > 0) isBiggerZero = true;
    else isBiggerZero = false;

    for(int i = 0; i < sequence.size() - 1; i++)
        if(sequence[i + 1] - sequence[i] <= 0 && isBiggerZero == true) return false;
        else if(sequence[i + 1] - sequence[i] >= 0 && isBiggerZero == false) return false;

    return true;
}