#include "student5_adeque.h"
#include <cassert>

#include <iostream>


const char* nameOfStudentADeque(){
    return "Emil Kronholm";
}

ADeque::ADeque()
{
    m_size = 0;
    m_capacity = 1;
    m_IndexFront = 0;
    m_pArr = new float[this->m_capacity];
}

ADeque::~ADeque()
{
    delete [] m_pArr;
}

void ADeque::pushBack(float value)
{
    if (m_size == m_capacity)
        expandArray();

    m_pArr[nextIndex(getIndexOfBack())] = value;
    m_size += 1;
}

void ADeque::pushFront(float value)
{
    if (m_size == m_capacity)
        expandArray();

    const int newIndex = priorIndex(m_IndexFront);

    m_pArr[newIndex] = value;
    m_IndexFront = newIndex;

    m_size += 1;
}

void ADeque::popBack()
{
    assert(m_size > 0);
    m_size -= 1;
}

void ADeque::popFront()
{
    assert(m_size > 0);
    m_IndexFront = nextIndex(this->m_IndexFront);
    m_size -= 1;
}

float &ADeque::back()
{
    assert(m_size > 0);
    return this->m_pArr[getIndexOfBack()];
}

float &ADeque::front()
{
    assert(m_size > 0);
    return this->m_pArr[m_IndexFront];
}

int ADeque::size() const
{
    return this->m_size;
}

//Egna funktioner

int ADeque::priorIndex(const int index)
{
    //assert(index >= 0);
    return (index == 0) ? m_capacity - 1 : index - 1;
}

int ADeque::nextIndex(const int index)
{
    //assert(index < m_capacity);
    return (index+1)%m_capacity;
    //return (index == this->m_capacity - 1) ? 0 : index + 1;
}

/***************************************************************
 * Takes in an index thats not relative to the
 * circluar array, and returns index that is.
 *
 * getRelativeIndex(0) should return m_startindex;
 * getRelativeIndex(1) returns the index of the second element
 * getRelativeIndex(7) returns the index of the 8th element
 ***************************************************************/
int ADeque::getRelativeIndex(const int index)
{
    return (m_IndexFront + index)%this->m_capacity;
}

void ADeque::expandArray()
{
    const int newCapacity = this->m_capacity * 2;
    float *newArr = new float[newCapacity];

    for (int i = 0; i < this->m_size; i++)
    {
        //Fråga? Vilken är bäst?

        //const int index = nextIndex((m_IndexFront + i - 1)%m_capacity);
        const int index = nextIndex(getRelativeIndex(i - 1));

        newArr[i] = this->m_pArr[index];
    }

    m_IndexFront = 0;
    m_capacity = newCapacity;

    delete [] m_pArr;
    m_pArr = newArr;
}

int ADeque::getIndexOfBack()
{
    //assert(m_size > 0);
    return (m_IndexFront + this->m_size - 1)%this->m_capacity;
}

void ADeque::testing()
{
    std::cout << "Start: " << this->m_IndexFront << std::endl;
    std::cout << "End: " << this->getIndexOfBack() << std::endl;
    std::cout << "Size: " << this->size() << std::endl;
    std::cout << "Capaxity: " << this->m_capacity << std::endl;
}


