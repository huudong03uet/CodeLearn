#include <vector>

int countTriangles(std::vector<int> x, std::vector<int> y)
{
    int cnt = 0;
    for(int i = 0; i < x.size(); i++)
        for(int j = i + 1; j < x.size(); j++)
            for(int n = j + 1; n < x.size(); n++)
            {
                if((x[i] - x[j]) * (y[i] - y[n]) != (x[i] - x[n]) * (y[i] - y[j])) cnt++;
            }
    return cnt;
}