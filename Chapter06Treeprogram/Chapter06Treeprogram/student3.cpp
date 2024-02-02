


#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>
#include <QDebug>
#include "students.h"

#include <iostream>

using namespace std;


const char* nameOfStudent3(){
    return "Emil Kronholm";
}

/**************************************************************************
 * Serialisering.
 *
 * Läsa och skriva träd från fil.
 * Dessa algoritmer skall fungera för alla typer av träd, inte bara sökträd.
 * Om man sparar ett träd och därefter läser filen skall det återskapade
 * trädet ha exakt samma struktur som det sparade trädet.
 **************************************************************************/


/**************************************************************************
 * Serialisering.
 *
 * Läsa och skriva träd från fil.
 * Dessa algoritmer skall fungera för alla typer av träd, inte bara sökträd.
 * Om man sparar ett träd och därefter läser filen skall det återskapade
 * trädet ha exakt samma struktur som det sparade trädet.
 **************************************************************************/

void saveTreeToStream(ofstream& utfil, Node *pTree)
{
    if (pTree == nullptr)
    {
        utfil << 'x';
        return;
    }

    utfil << 'v' << pTree->m_key;
    saveTreeToStream(utfil, pTree->m_pLeft);
    saveTreeToStream(utfil, pTree->m_pRight);
}

/*Node *readTreeFromStream(deque<char>& que)
{
    if (que.size() == 0) return nullptr;

    if (que.front() == 'x')
    {
        que.pop_front();
        return nullptr;
    }
    else if (que.front() == 'v')
    {
        que.pop_front();

        //Read the value of key
        string key = "";
        while ((que.front() != 'v' && que.front() != 'x'))
        {
            key +=  string(1, que.front());
            que.pop_front();
        }

        Node* p = new Node(stoi(key));
        p->m_pLeft = readTreeFromStream(que);
        p->m_pRight = readTreeFromStream(que);

        return p;
    }

    //Not a valid input (not really needed)
    assert(false);
}*/

Node *readTreeFromStream(ifstream& infil)
{
    char input;

    if (infil >> input)
    {

        if (input == 'x') return nullptr;
        else if (input == 'v')
        {

            int key;
            infil >> key;

            Node* pTree = new Node(key);
            pTree->m_pLeft = readTreeFromStream(infil);
            pTree->m_pRight = readTreeFromStream(infil);

            return pTree;
        }
    }
    //Infil is empty
    return nullptr;
}



void testfunktion3(Node *pTree){
    qDebug() << "testfunktion3";
    // frivilligt att skriva kod här
}
