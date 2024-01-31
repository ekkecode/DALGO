#include "student2stackl.h"
#include <cassert>
#include <iostream>

using namespace std;

const char* nameOfStudent2(){
    return "Emil Kronholm";
}

StackL::StackL()
{
    this->m_pTop = nullptr;
    this->m_size = 0;
}

StackL::StackL(const StackL& theOther)
{
    if (theOther.m_size <= 0)
    {
        this->m_pTop = nullptr;
        this->m_size = 0;
        return;
    }

    this->m_size = theOther.m_size;

    //Manually creates the first element
    this->m_pTop = new Link;
    this->m_pTop->m_data = theOther.m_pTop->m_data;
    this->m_pTop->m_pNext = nullptr;

    //Creates oldLink which refers to the oldLinks
    //PriorLink is the link that was just created
    Link* oldLink = theOther.m_pTop->m_pNext;
    Link* priorLink = this->m_pTop;

    //Loops throuh all remaining links
    for (int i = 1; i < theOther.size(); i++)
    {
        priorLink->m_pNext = new Link;
        priorLink->m_pNext->m_data = oldLink->m_data;
        priorLink->m_pNext->m_pNext = nullptr;

        oldLink = oldLink->m_pNext;
        priorLink = priorLink->m_pNext;
    }
}

StackL::~StackL()
{
    for (int i = 0; i < this->size(); i++)
    {
        this->pop();
    }
}

void StackL::push(float value)
{
    Link* link = new Link;
    link->m_data = value;
    link->m_pNext = this->m_pTop;

    this->m_pTop = link;
    this->m_size += 1;
}

void StackL::pop()
{
    assert(this->m_size > 0);

    Link* newLink = this->m_pTop->m_pNext;

    delete this->m_pTop;

    this->m_pTop = newLink;
    this->m_size -= 1;
}


float StackL::top() const
{
    assert(this->m_size > 0);
    return this->m_pTop->m_data;
}

int StackL::size() const
{
    return this->m_size;
}

void studentTest2()
{

     cout << endl << endl <<  "studentTest2..." << endl;

    // Skriv din egen testkod här
}

