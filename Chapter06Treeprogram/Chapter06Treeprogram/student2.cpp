

#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>
#include <QDebug>
#include "students.h"


const char* nameOfStudent2(){
    return "Emil Kronholm";
}

/**************************************************************************
 * Sökträd.
 *
 *
 **************************************************************************/

void insertKeyToSearchtree(Node*& pTree, int key)
{

}

bool contains(Node *pTree, int key){
    return false; // FEL
}


Node* nodeWithMinimumKey(Node *pTree){

    // Enligt anvisning bör du ej göra den rekursiv
    // (så att ni inte skriver av min god på alla uppgifter)
    return nullptr; // FEL


}

void removeKeyFromSearchtree(Node* &pTree, int key){

}

/*** redogörelse för experiment ***************************************

  Hur stort blir trädets höjd respektive genomsnittliga
   djup om man stoppar in 255 element (gör flera experiment om det går)?


  TODO...

  höjd = ..

  genomsnittligt djup = ...

  (gör flera experiment)

   OBS på Windowsmaskiner kan det vara svårt att utföra flera olika experiment.


  varför är det genomsnittliga djupet intressant? ...


 ******************************************************************************/



void testfunktion2(Node *pTree){
    qDebug() << "testfunktion2";

    // frivilligt att skriva kod här
}
