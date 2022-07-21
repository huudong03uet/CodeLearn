#include <string>
using namespace std;

bool bishopAndPawn(string bishop, string pawn)
{
    if(bishop == pawn) return false;
    if(abs(bishop[0] - pawn[0]) == abs(bishop[1] - pawn[1])) return true;
    return false;
}