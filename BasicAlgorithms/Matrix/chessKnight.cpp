#include <iostream>
#include <string>
using namespace std;

#include <iostream>
using namespace std;
int chessKnight(string Cell)
{
    int cnt = 0;
    if(Cell[0] - 1 < 'a' || Cell[1] - 2 < '1'){} else {cnt++;}
    if(Cell[0] - 2 < 'a' || Cell[1] - 1 < '1') {} else {cnt++;}
    if(Cell[0] + 1 > 'h' || Cell[1] + 2 > '8') {} else {cnt++;}
    if(Cell[0] + 2 > 'h' || Cell[1] + 1 > '8') {} else {cnt++;}

    if(Cell[0] - 2 < 'a' || Cell[1] + 1 > '8') {} else {cnt++;}
    if(Cell[0] - 1 < 'a' || Cell[1] + 2 > '8') {} else {cnt++;}

    if(Cell[0] + 1 > 'h' || Cell[1] - 2 < '1') {} else {cnt++;}
    if(Cell[0] + 2 > 'h' || Cell[1] - 1 < '1') {} else {cnt++;}

    return cnt;
}