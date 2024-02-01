#include "student4_arrayque.h"
#include "assert.h"

const char* nameOfStudentAQue()
{
    return "Emil Kronholm";
}

AQue::AQue()
{
    m_pArr = new float[10];
    m_indexOfFront = 0;
    m_size = 0;
    m_capacity = 1;
}

AQue::~AQue()
{
    delete [] m_pArr;
}

void AQue::pushBack(float value)
{
    //Duplicates size when needed.
    if (m_size == m_capacity)
    {
        const int newCapacity = m_capacity * 2;
        float* arr = new float[newCapacity];

        for (int i = 0; i < m_size; i++)
        {
            const int index = nextIndex((m_indexOfFront + i - 1)%m_capacity);
            arr[i] = m_pArr[index];
        }

        //Updates this object
        m_indexOfFront = 0;
        m_capacity = newCapacity;

        delete [] this->m_pArr;
        m_pArr = arr;
    }

    const int indexOfBack = getIndexOfBack();
    m_pArr[nextIndex(indexOfBack)] = value;
    m_size += 1;
}

float &AQue::back()
{
    const int indexOfBack = getIndexOfBack();
    return m_pArr[indexOfBack];
}

void AQue::popFront()
{
    const int newIndex = nextIndex(m_indexOfFront);
    m_indexOfFront = newIndex;
    m_size -= 1;
}

float &AQue::front()
{
    return m_pArr[m_indexOfFront];
}

int AQue::size() const
{
    return m_size;
}

//Egna funktioner

int AQue::getIndexOfBack()
{
    if (m_size == 0)
        return m_indexOfFront;

    return (m_indexOfFront + m_size - 1)%m_capacity;
}

int AQue::priorIndex(const int index)
{
    assert(index >= 0);
    return (index == 0) ? m_capacity - 1 : index - 1;
}

int AQue::nextIndex(const int index)
{
    assert(index < m_capacity);
    return (index == m_capacity - 1) ? 0: index + 1;
}



