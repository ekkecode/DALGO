#include "student5_adeque.h"
#include <cassert>

#include <iostream>


const char* nameOfStudentADeque(){
    return "Emil Kronholm";
}



ADeque::ADeque()
{
    this->m_size = 0;
    this->m_capacity = 1;
    this->m_IndexFront = 0;
    this->m_pArr = new float[this->m_capacity];
}

ADeque::~ADeque()
{
    delete [] this->m_pArr;
}

void ADeque::pushBack(float value)
{
    if (this->m_size == this->m_capacity)
        this->expandArray();

    this->m_pArr[nextIndex(getIndexOfBack())] = value;
    this->m_size += 1;
}

void ADeque::pushFront(float value)
{
    if (this->m_size == this->m_capacity)
        this->expandArray();

    const int newIndex = priorIndex(this->m_IndexFront);

    this->m_pArr[newIndex] = value;
    this->m_IndexFront = newIndex;

    this->m_size += 1;
}

void ADeque::popBack()
{
    assert(this->m_size > 0);
    this->m_size -= 1;
}

void ADeque::popFront()
{
    assert(this->m_size > 0);
    this->m_IndexFront = nextIndex(this->m_IndexFront);
    this->m_size -= 1;
}

float &ADeque::back()
{
    return this->m_pArr[getIndexOfBack()];
}

float &ADeque::front()
{
    return this->m_pArr[this->m_IndexFront];
}

int ADeque::size() const
{
    return this->m_size;
}

//Egna funktioner

int ADeque::priorIndex(const int index)
{
    assert(index >= 0);
    return (index == 0) ? this->m_capacity - 1 : index - 1;
}

int ADeque::nextIndex(const int index)
{
    assert(index < this->m_capacity);
    return (index+1)%this->m_capacity;
    //return (index == this->m_capacity - 1) ? 0 : index + 1;
}

/***************************************************************
 * Takes in an index thats not relative to the
 * circluar array, and returns index that is.
 *
 * getRelativeIndex(0) should return m_startindex;
 * getRelativeIndex(1) returns the index of the second element
 * getRelativeIndex(7) returns the index of the 7th element
 ***************************************************************/
int ADeque::getRelativeIndex(const int index)
{
    return (this->m_IndexFront + index - 1)%this->m_capacity;
}

void ADeque::expandArray()
{
    const int newCapacity = this->m_capacity * 2;
    float *newArr = new float[newCapacity];

    for (int i = 0; i < this->m_size; i++)
    {
        //Fråga? Vilken är bäst?

        //const int index = nextIndex((this->m_IndexFront + i - 1)%this->m_capacity);
        const int index = nextIndex(getRelativeIndex(i));

        newArr[i] = this->m_pArr[index];
    }

    this->m_IndexFront = 0;
    this->m_capacity = newCapacity;

    delete [] this->m_pArr;
    this->m_pArr = newArr;
}

int ADeque::getIndexOfBack()
{
    if (this->m_size == 1) return this->m_IndexFront;
    return (this->m_IndexFront + this->m_size - 1)%this->m_capacity;
}

void ADeque::testing()
{
    std::cout << "Start: " << this->m_IndexFront << std::endl;
    std::cout << "End: " << this->getIndexOfBack() << std::endl;
    std::cout << "Size: " << this->size() << std::endl;
    std::cout << "Capaxity: " << this->m_capacity << std::endl;
}


