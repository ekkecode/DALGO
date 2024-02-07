#include "studentsMinheap.h"
#include "assert.h"



const char* nameOfStudent(){
    return "Emil Kronholm";
}

MinHeap::MinHeap(int sizeOfArray)
    :m_sizeOfArray(sizeOfArray)
{    
    n_theArray = new int[m_sizeOfArray];
    m_size = 0;
}

MinHeap::~MinHeap()
{
    delete [] n_theArray;
}

void MinHeap::insert(int data)
{
    assert(!isFull());

    int insertIndex = m_size + 1;

    while (insertIndex/2 >= 1 && dataAtIndex(insertIndex/2) > data)
    {
        n_theArray[insertIndex] = dataAtIndex(insertIndex/2);
        insertIndex = insertIndex/2;
    }

    n_theArray[insertIndex] = data;
    m_size += 1;
}

int MinHeap::min()
{
    assert(m_size > 0);
    return n_theArray[1];
}

void MinHeap::deleteMin()
{
    assert( !isEmpty() );

    n_theArray[1] = n_theArray[m_size];
    m_size -= 1;
    percolateDown(1);
}

void MinHeap::percolateDown(int ix)
{
    const int data = dataAtIndex(ix);

    int parentx = ix;
    int childx = ix*2;

    while (childx <= m_size)
    {
        if (childx + 1 <= m_size && dataAtIndex(childx+1) < dataAtIndex(childx))
        {
            childx = childx + 1;
        }

        if (dataAtIndex(childx) < data)
        {
            n_theArray[parentx] = dataAtIndex(childx);
        }
        else
        {
            break;
        }

        parentx = childx;
        childx = childx * 2;
    }

    n_theArray[parentx] = data;
}

int MinHeap::size()
{
    return m_size;
}

// Fyller heapens array med data utan att organisera det i en heap-struktur.
// (detta gör man istället interaktiv)
void MinHeap::fillArrayWithData(int *newData, int size)
{
    assert( size<m_sizeOfArray);

    for (int i=1; i<=size ; i+=1)
        n_theArray[i] = newData[i];
    m_size = size;
}
