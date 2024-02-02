#include "student1cstackl.h"
#include <cassert>
#include <iostream>

using namespace std;

const char* nameOfStudent1(){
    return "Emil Kronholm";
}

CStackL  CStackLConstruct(){
   // Jag lämnar kvar denna implementering
    CStackL theStack;
    theStack.m_pTop = nullptr;
    theStack.m_size = 0;
    return theStack;
}

CStackL CStackLConstruct(const CStackL &other)
{
    if (other.m_size == 0) return CStackLConstruct();

    CStackL stack;
    stack.m_size = other.m_size;

    //Creates the first element in the stack
    stack.m_pTop = new Link;
    stack.m_pTop->m_data = other.m_pTop->m_data;

    Link* oldLink = other.m_pTop->m_pNext;
    Link* priorLink = stack.m_pTop;

    for (int i = 1; i < other.m_size; i++)
    {
        priorLink->m_pNext = new Link;
        priorLink->m_pNext->m_data = oldLink->m_data;

        oldLink = oldLink->m_pNext;
        priorLink = priorLink->m_pNext;
    }

    priorLink->m_pNext = nullptr;

    return stack;
}

void CStackLDestruct(CStackL *pDettaObjekt)
{
    while (pDettaObjekt->m_size > 0)
    {
        CStackLPop(pDettaObjekt);
    }
}

void CStackLPush(CStackL *pDettaObjekt, float data)
{
    //Allocate new link
    Link *link = new Link;
    link->m_data = data;
    link->m_pNext = pDettaObjekt->m_pTop;

    pDettaObjekt->m_pTop = link;

    //Increase the size by 1
    pDettaObjekt->m_size += 1;
}


float CStackLTop(CStackL *pDettaObjekt)
{
    assert (pDettaObjekt -> m_size > 0);
    return pDettaObjekt->m_pTop->m_data;
}


void CStackLPop(CStackL *pDettaObjekt)
{

    assert (pDettaObjekt->m_size > 0);

    Link* pOldTop = pDettaObjekt->m_pTop;

    pDettaObjekt->m_pTop = pDettaObjekt->m_pTop->m_pNext;
    pDettaObjekt->m_size -= 1;

    delete pOldTop;
}

int  CStackLSize(CStackL *pDettaObjekt)
{
    return pDettaObjekt->m_size;
}

// ----- Din testkod

void studentTest1(){

     cout << endl << endl << "studentTest1..." << endl ;

    CStackL stack1 = CStackLConstruct () ;
    CStackLPush ( & stack1 , 1);
    CStackLPush ( & stack1 , 2);
    CStackLPush ( & stack1 , 3);
    CStackLPush ( & stack1 , 4.5);

    cout << "Borde vara 4.5: " << CStackLTop(&stack1) << endl;
    CStackLPop(&stack1);
    cout << "Borde vara 3: " << CStackLTop(&stack1) << endl;
   // CStackLDestruct ( & stack1 );

    CStackL stack2 = CStackLConstruct ( stack1 );
    CStackLPop ( & stack2 ) ;

    cout << "Borde vara 2: "<< CStackLTop(&stack2) << endl;
    CStackLPop(&stack2);
    cout << "Borde vara 1: " << CStackLTop(&stack2) << endl;
    CStackLDestruct ( & stack2 );
    CStackLDestruct ( & stack1 );

}

