#include "student1mergesort.h"

const char* nameOfStudentMergesort(){
    return "Emil Kronholm";
}

//   lägg gärna in diverse hjälpfunktioner här!

//  ...

//  ...

void swap(float &a, float&b)
{
    float temp = a;
    a = b;
    b = temp;
}

void merge(const float* pFromBegin,  const float *pFromEnd, int sizeOfFromRuns, float *pToBegin)
{
    const int size = pFromEnd - pFromBegin;


    int li1 = pFromEnd - pFromBegin;
    int ri1 = li1 + 1;

    int index = 0;

    for (int i = 0; i < sizeOfFromRuns; i++)
    {
        if (pFromBegin[li1 + i] <= pFromBegin[ri1 + i])
        {
            pToBegin[index] = pFromBegin[li1 + i];
            pToBegin[index + 1] = pFromBegin[ri1 + i];
            index += 2;
        }
    }




}

void mergesort(float* pBegin, float* pEnd){

    int size = pEnd - pBegin;
    float* pTemp  = new float [size];

    //1, 2, 4, 8, 16...
    for (int n = 1; n < size; n*=2)
    {
        //i, 2i, 3i, 4i, 5i..
        //n=2: 0, 2, 4, 6...
        //n=4: 0, 4, 8, 16...
        //n=8: 0, 8, 16, 32...
        for (int i = 0; i * n <= size; i++)
        {
            if (pBegin[i*n] > pBegin[i*n+1])
            {
                pTemp[i*n] = pBegin[i*n+1];
                pTemp[i*n + 1] = pBegin[i*n];
            }
            else
            {
                pTemp[i*n+1] = pBegin[i*n];
                pTemp[i*n] = pBegin[i*n+1];
            }
        }

        //Merge...
        for (int i = 0; i * n <= size; i++)
        {
            merge(pTemp + i*n, pTemp + (n*4), n*2, pBegin);
        }
    }

    for (int i = 0; i < size; i++)
        pBegin[i] = pTemp[i];

    delete [] pTemp;
}
