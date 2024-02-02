#include "student3_listque.h"
#include "assert.h"


#include "student3_listque.h"
#include "assert.h"


const char* nameOfStudentLQue()
{
    return "Emil Kronholm";
}

LQue::LQue()
{
    m_size = 0;
    m_pFront = nullptr;
    m_pBack = nullptr;
}

LQue::~LQue()
{
    for (int i = 0; i < this->m_size; i++)
    {
        popFront();
    }
}

/*void LQue::pushBack(float value)
{
    if (m_size == 0)
    {
        Link* pNewLink = new Link(value);
        m_pFront = pNewLink;
        m_pBack = pNewLink;
        m_size += 1;
    }

    else if (m_size == 1)
    {
        Link* pNewLink = new Link(value);
        m_pFront->m_pNext = pNewLink;
        m_pBack = pNewLink;
        m_size += 1;
    }

    else
    {
        Link* pNewLink = new Link(value);
        m_pBack->m_pNext = pNewLink;
        m_pBack = pNewLink;
        m_size += 1;
    }
}*/

void LQue::pushBack(float value)
{
    Link* pNewLink = new Link(value);

    //Specialfall
    if (m_size == 0) m_pFront = pNewLink;
    else m_pBack->m_pNext = pNewLink;

    //Gennerellt
    m_pBack = pNewLink;
    m_size += 1;
}

float &LQue::back()
{
    return m_pBack->m_value;
}

void LQue::popFront()
{
    assert(m_size > 0);

    Link* pOldFront = m_pFront;
    m_pFront = m_pFront->m_pNext;
    delete pOldFront;
    m_size -= 1;

    if (m_size == 0)
    {
        m_pFront = nullptr;
        m_pBack = nullptr;
    }
}

float &LQue::front()
{
    return m_pFront->m_value;
}

int LQue::size() const
{
    return m_size;
}



//GAMMAL !!!!
/*

const char* nameOfStudentLQue()
{
    return "Emil Kronholm";
}

LQue::LQue()
{
    m_size = 0;
    m_pFront = nullptr;
    m_pBack = nullptr;
}

LQue::~LQue()
{
    for (int i = 0; i < this->m_size; i++)
    {
        popFront();
    }
}

void LQue::pushBack(float value)
{
    Link* pLink = new Link(value);
    pLink->m_pPrior = nullptr;

    //Specialfall 1: 0 element (Helt oberoende)
    if (m_size == 0)
    {
        //Finns 1 element pekar både front och back på det
        m_pFront = pLink;
        m_pBack = pLink;
        m_size += 1;
        return;
    }

    //Speciallfall 2: ett element
    else if (m_size == 1)
    {
        //Ska 2 element finnas är det som vanligt, förutom följande:
        m_pBack = pLink;

        m_pBack->m_pNext = m_pFront;
        m_pFront->m_pPrior = m_pBack;
        m_size += 1;
        return;
    }
    else
    {
        //Generellt
        m_pBack->m_pPrior = pLink;
        pLink->m_pNext = m_pBack;

        m_pBack = pLink;
        m_size += 1;
    }


}

float &LQue::back()
{
    assert(m_size > 0);
    return m_pBack->m_value;
}

void LQue::popFront()
{
    assert(m_size>0);

    //pBack and pFront points to the element, and the que will now be empty
    if (m_size == 1)
    {
        delete m_pFront;

        m_pBack = nullptr;
        m_pFront = nullptr;
        m_size = 0;
        return;
    }

    //Que will be size 1, pFront and pBack will point towards the last element
    else if (m_size == 2)
    {
        delete m_pFront;

        m_pFront = m_pBack;
        m_pFront->m_pNext = nullptr;
        m_pFront->m_pPrior = nullptr;
        m_size = 1;

        return;
    }
    else
    {
        Link* pNewFront = m_pFront->m_pPrior;
        delete m_pFront;
        m_pFront = pNewFront;

        m_pFront->m_pNext = nullptr;
        m_size -= 1;
    }
}

float &LQue::front()
{
    assert(m_size > 0);
    return m_pFront->m_value;
}

int LQue::size() const
{
    return this->m_size;
}*/
