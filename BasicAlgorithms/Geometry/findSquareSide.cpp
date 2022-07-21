#include <vector>

int findSquareSide(std::vector<int> x, std::vector<int> y)
{
    int length1 = (x[0] - x[1]) * (x[0] - x[1]) + (y[0] - y[1]) * (y[0] - y[1]);
    int length2 = (x[0] - x[2]) * (x[0] - x[2]) + (y[0] - y[2]) * (y[0] - y[2]);
    int length3 = (x[0] - x[3]) * (x[0] - x[3]) + (y[0] - y[3]) * (y[0] - y[3]);
    if(length1 == length2) return length1;
    else return length3;
}