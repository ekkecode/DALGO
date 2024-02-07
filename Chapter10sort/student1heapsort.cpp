#include "student2heapsort.h"

#include <assert.h>
#include <iostream>


const char* nameOfStudentHeapsort(){
    return "Emil Kronholm";
}

void percolateDown(float* pValue, float* pBegin, float* pEnd)
{
    assert(pValue >= pBegin);
    assert(pValue < pEnd);

    int size = pEnd - pBegin;

    //pbegin[index] is pValue (and first parent)
    //Also
    //pBegin[0] is now writen as pBegin[1]
    pBegin -= 1;
    int index = pValue - pBegin;

    while (index*2 <= size)
    {
        float* parent = &pBegin[index];
        float* child = &pBegin[index*2];

        if (index*2 + 1 <= size && *(child) < *(child+1))
        {
            child += 1;
        }

        if (*child > *parent)
        {
            //Switch parent and child
            float temp = *parent;
            *parent = *child;
            *child = temp;
        }
        else
        {
            break;
        }

        index = child - pBegin;
    }
}

float max(float* pBegin, float *pEnd)
{
    return *pBegin;
}


void deleteMax(float* pBegin, float* pEnd)
{
    *pBegin = *(pEnd - 1);
    percolateDown(pBegin, pBegin, pEnd - 1);
}

void testing()
{
    //Testing testing ?!

    float* arr = new float[7];

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;

    for (int i = 4; i < 7; i ++)
        arr[i] = 0;

    percolateDown(&arr[0], arr, arr+10);

    for (int i = 0; i < 4; i ++)
        std::cout << arr[i] << std::endl;

    std::cout << std::endl << std::endl;

    percolateDown(&arr[1], arr, arr+10);
    //percolateDown(&arr[0], arr, arr+10);

    for (int i = 0; i < 4; i ++)
        std::cout << arr[i] << std::endl;

    std::cout << std::endl << std::endl;
}

void heapsort(float* pBegin, float* pEnd)
{
    //Skapa heap O(n)
    for (float* p = pEnd - 1; p >= pBegin; p--)
    {
        percolateDown(p, pBegin, pEnd);
    }

    //Iterativt deleteMax: O(n) * O(logN)
    int size = pEnd - pBegin;
    for (float* p = pEnd;  p > pBegin + 1; p--)
    {
        float max = *pBegin;

        //O(logN)
        deleteMax(pBegin, p);

        *(p - 1) = max;
    }

    //Totalt O(n) + O(n logn) = O(n logn)

}
