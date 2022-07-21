#include <string>
using namespace std;
bool chessBoardCellColor(string cell1, string cell2)
{
    if(abs(cell1[0] - cell2[0]) % 2 == abs(cell1[1] - cell2[1]) % 2) return true;
    return false;
}