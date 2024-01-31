#include "student3_listque.h"
#include "assert.h"


const char* nameOfStudentLQue()
{
    return "Emil Kronholm";
}

LQue::LQue()
{
    this->m_size = 0;
    this->m_pFront;
    this->m_pBack;

    this->m_pBack->m_pNext = this->m_pFront;
}

LQue::~LQue()
{
    for (int i = 0; i < this->m_size; i++)
    {

    }
}

void LQue::pushBack(float value)
{
    Link* pLink;



    this->m_pBack = pLink;
    this->m_size += 1;
}

float &LQue::back()
{
    if (this->m_size == 1) return this->m_pBack->m_value;
    return this->m_pBack->m_value;
}

void LQue::popFront()
{
    assert(m_size>0);

    //If front is null, and size != 0. Then pBack is the only element left.
    if (this->m_pFront == nullptr)
    {
        this->m_pBack = nullptr;
        this->m_size = 0;
        return;
    }

    this->m_pFront = nullptr;
    this->m_size -= 1;
}

float &LQue::front()
{
    assert(m_size > 0);

    if (this->m_pFront == nullptr)
        return this->m_pBack->m_value;
    return this->m_pFront->m_value;
}

int LQue::size() const
{
    return this->m_size;
}
