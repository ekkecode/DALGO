

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
    if (pTree == nullptr) pTree = new Node(key);
    else if (key < pTree->m_key) insertKeyToSearchtree(pTree->m_pLeft, key);
    else if (key > pTree->m_key) insertKeyToSearchtree(pTree->m_pRight, key);
    else return;
}

bool contains(Node *pTree, int key)
{
    if (pTree == nullptr) return false;
    else if (key < pTree->m_key) return contains(pTree->m_pLeft, key);
    else if (key > pTree->m_key) return contains(pTree->m_pRight, key);
    else return true;
}

Node* nodeWithMinimumKey(Node *pTree)
{
    while (pTree->m_pLeft != nullptr)
    {
        pTree = pTree->m_pLeft;
    }

    return pTree;
}

void removeKeyFromSearchtree(Node* &pTree, int key)
{
    if (pTree == nullptr) return;
    if (key < pTree->m_key) removeKeyFromSearchtree(pTree->m_pLeft, key);
    else if (key > pTree->m_key) removeKeyFromSearchtree(pTree->m_pRight, key);
    else if (key == pTree->m_key)
    {
        //DAGS ATT RADERA!!

        //0 till 1 barn
        if (pTree->m_pLeft == nullptr || pTree->m_pRight == nullptr)
        {
            Node* pOldNode = pTree;
            pTree = (pTree->m_pLeft == nullptr) ? pTree->m_pRight : pTree->m_pLeft;

            delete pOldNode;
        }
        else
        {
            pTree->m_key = nodeWithMinimumKey(pTree->m_pRight)->m_key;
            removeKeyFromSearchtree(pTree->m_pRight, pTree->m_key);
        }
    }
}

/*** redogörelse för experiment ***************************************

    1. Hur stort blir trädets höjd respektive genomsnittliga
    djup om man stoppar in 255 element (gör flera experiment om det går)?


    TODO...

    höjd =                16      18    15
    genomsnittligt djup = 7.84    8.86  8.07

    (gör flera experiment)

    OBS på Windowsmaskiner kan det vara svårt att utföra flera olika experiment.

    2. Hur stort skulle genomsnitt djup blivit om trädet hade varit så jämnt som möjligt?

    Skapar ett nytt träd:
    Genomsnittsdjup: 9.1
    Höjd: 17
    AntalNoder: 255

    Om det vore så jämnt som möjligt hade alla träd haft antingen 2 barn, eller 1 barn om det barn vore ett löv.
    255 är av en viss slump 2^8 - 1.

    1 nod (0 höjd)
    2 nod (1 höjd)
    4 nod (2 höjd)
    8 noder (3 höjd)
    16 noder (4 höjd)
    256 noder (8 höjd)

    Först id 8 höjd hr vi uppnått 255 noder.

    Snitt djupet blir
    (1 * 0 +
    2 * 1 +
    4 * 2 +
    8 * 3 +
    .
    .
    .
    255 * 8)/255

    Så jag vill hävda att det optimala jämna trädet skulle ha genomsnitts djup 1 mindre än 7


    3. Varför är det genomsnittliga djupet intressant?
    I stora träd som inte får plats på RAM-minnen, utan ligger på hårddisken är ordo analyser inte så intressanta.

    Enligt presentationen motsvarar en diskacess cirka 200 000 operationer vilket är nog många.
    Så istället för att minimera operationer måste vi minimera diskacceser.

    Och eftersom att antal diskaccesser praktikst sätt motsvarar trädets djup, (vet ej varför tho)
    så måste vi minimera djupet så mycket som möjligt då det är det som faktiskt sparar tid.

 ******************************************************************************/



void testfunktion2(Node *pTree){
    qDebug() << "testfunktion2";

    // frivilligt att skriva kod här
}
