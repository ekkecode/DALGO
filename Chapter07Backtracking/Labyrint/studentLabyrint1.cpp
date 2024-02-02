#include "studentLabyrint1.h"
#include <cassert>
#include <iostream>

using namespace std;

bool didIndicatePathToGoal(IMaze *pMaze, int r, int k)
{
    if (!pMaze->isInside(r, k)) return false;
    if (pMaze->hasStone(r, k)) return false;
    if (pMaze->isWall(r, k)) return false;

    if (pMaze->isGoal(r, k)) return true;

    pMaze->placeStone(r, k);

    if (didIndicatePathToGoal(pMaze, r + 1, k))
    {
        cout << "1" << endl;
        pMaze->indicateThatRKIsOnPath(r + 1, k);
        return true;
    }
    else if (didIndicatePathToGoal(pMaze, r - 1, k))
    {
        cout << "2" << endl;
        pMaze->indicateThatRKIsOnPath(r - 1, k);
        return true;
    }
    else if (didIndicatePathToGoal(pMaze, r, k + 1))
    {
        cout << "3" << endl;
        pMaze->indicateThatRKIsOnPath(r, k + 1);
        return true;
    }
    else if (didIndicatePathToGoal(pMaze, r, k - 1))
    {
        cout << "4" << endl;
        pMaze->indicateThatRKIsOnPath(r, k - 1);
        return true;
    }
    else
    {
        //Hittade inte
        cout << "Dick" << endl;
        return false;
    }
}


