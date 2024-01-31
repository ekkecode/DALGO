#include "student4_arrayque.h"
#include "assert.h"

#include "iostream"



const char* nameOfStudentAQue()
{
    return "Emil Kronholm";
}

AQue::AQue()
{
    this->m_pArr = new float[10];
    this->m_indexOfFront = 0;
    this->m_size = 0;
    this->m_capacity = 1;
}

AQue::~AQue()
{
    delete [] this->m_pArr;
}

void AQue::pushBack(float value)
{
    //Duplicates size when needed.
    if (this->m_size == this->m_capacity)
    {
        const int newCapacity = this->m_capacity * 2;
        float* arr = new float[newCapacity];

        for (int i = 0; i < this->m_size; i++)
        {
            const int index = nextIndex((this->m_indexOfFront + i - 1)%this->m_capacity);
            arr[i] = this->m_pArr[index];
        }

        //Updates this object
        this->m_indexOfFront = 0;
        this->m_capacity = newCapacity;

        delete [] this->m_pArr;
        this->m_pArr = arr;
    }

    if (this->m_size == 0)
    {
        this->m_pArr[this->m_indexOfFront] = value;
        this->m_size += 1;
        return;
    }

    const int indexOfBack = this->getIndexOfBack();
    this->m_pArr[nextIndex(indexOfBack)] = value;
    this->m_size += 1;
}

float &AQue::back()
{
    const int indexOfBack = this->getIndexOfBack();
    return this->m_pArr[indexOfBack];
}

void AQue::popFront()
{
    const int newIndex = nextIndex(this->m_indexOfFront);
    this->m_indexOfFront = newIndex;
    this->m_size -= 1;
}

float &AQue::front()
{
    return this->m_pArr[this->m_indexOfFront];
}

int AQue::size() const
{
    return this->m_size;
}

//Egna funktioner

int AQue::getIndexOfBack()
{
    if (this->m_size == 0)
        return m_indexOfFront;

    return (this->m_indexOfFront + this->m_size - 1)%this->m_capacity;
}

int AQue::priorIndex(const int index)
{
    return (index == 0) ? this->m_capacity - 1 : index - 1;
}

int AQue::nextIndex(const int index)
{
    return (index == this->m_capacity - 1) ? 0: index + 1;
}



