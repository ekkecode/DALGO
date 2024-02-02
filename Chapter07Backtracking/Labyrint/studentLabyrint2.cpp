#include "studentLabyrint2.h"
#include "rk.h"
#include "assert.h"
#include <vector>
#include <deque>

using namespace std;

// ANROP:  RK granne0 = rkOfNeighbor(rk, 0);
// Funktionen returnerar koorninaten till angivenm granne.
// (En koordinat har 4 grannar (höger, vänster, ner, upp)
// som nummreras från 0 till 3.)
RK rkOfNeighbor(RK rk, int ixOfneighbor){
    if (ixOfneighbor==0) return RK( rk.m_r,    rk.m_k +1);
    if (ixOfneighbor==1) return RK( rk.m_r,    rk.m_k -1);
    if (ixOfneighbor==2) return RK( rk.m_r +1, rk.m_k);
    if (ixOfneighbor==3) return RK( rk.m_r -1, rk.m_k);
    assert( false );
    return RK();
}


bool foundShortestPathToGoalFIFO(IMaze *pMaze, int r, int k){


    // Nedanstående deklarationer låter jag ligga kvar (radera om du vill).
    // rkPrevious blir en 2D-matris som du kan accessa med
    // hakparantesnotation (dvs rkPrevious[r][k]).
    // På varje plats i rkPrevious lagras ett RK-objekt.
    //
    // rkTodo blir som en fifo-kö på vilken man kan anropa push_back, front, och pop_front.
    // Även denna kö lagrar RK-objekt.

    vector<vector<RK>> rkPrevious( pMaze->sizeR(), vector<RK>(pMaze->sizeK(), RK()));
    deque<RK> rkTodo;

    rkTodo.push_back(RK(r, k));

    while (rkTodo.size() > 0)
    {
        RK rk = rkTodo.front();
        rkTodo.pop_front();

        if (pMaze->isGoal(rk.m_r, rk.m_k))
        {
            //VI HAR FUCKING HITTAT MÅLJÄVELN
            RK temp = rk;
            while (temp.m_r != r && temp.m_k != k)
            {
                pMaze->indicateThatRKIsOnPath(temp.m_r, temp.m_k);
                temp = rkPrevious[temp.m_r][temp.m_k];
            }
            return true;
        }

        pMaze->placeStone(rk.m_r, rk.m_k);

        for (int i = 0; i < 4; i++)
        {
            RK temp = rkOfNeighbor(rk, i);
            bool pushback = pMaze->isInside(temp.m_r, temp.m_k) &&
                            !pMaze->isWall(temp.m_r, temp.m_k) &&
                            !pMaze->hasStone(temp.m_r, temp.m_k);
            if (pushback)
            {
                rkTodo.push_back(RK(temp));
                rkPrevious[temp.m_r][temp.m_k] = temp;
            }
        }
    }

    // TODO
    return false;
}

