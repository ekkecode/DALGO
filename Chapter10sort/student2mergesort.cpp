#include "student1mergesort.h"

#include <cassert>
#include <iostream>

using namespace std;

const char* nameOfStudentMergesort(){
    return "Emil Kronholm";
}

//   lägg gärna in diverse hjälpfunktioner här!

//  ...

//  ...

void testing()
{
    float arr[16] = {2, -5, 1, -7, 13, -1, -5, -8, -2, -4, 0, -2, 5, 2, -6, 9};
    mergesort(arr, arr+16);
}

void swap(float &a, float&b)
{
    float temp = a;
    a = b;
    b = temp;
}

void merge(const float* pFromBegin,  const float *pFromEnd, int sizeOfFromRuns, float *pToBegin)
{

    const int size = pFromEnd - pFromBegin;
    assert(sizeOfFromRuns == size);

    int leftIndex = 0;
    const int leftEndIndex = sizeOfFromRuns/2;
    int rightIndex = sizeOfFromRuns/2;
    const int rightEndIndex = size;

    int index = 0;

    /*cout << "Size: " << size << endl;
    cout << "That consists of elements: " << endl;

    for (int i = 0; i < rightIndex; i++)
        cout << pFromBegin[i] << endl;

    cout << "SPLIT" << endl;

    for (int i = rightIndex; i < size; i++)
        cout << pFromBegin[i] << endl;


    cout << endl;*/

    while (index < size)
    {
        //Bara right kvar
        if (leftIndex >= leftEndIndex && rightIndex < rightEndIndex)
        {
            assert(&pFromBegin[rightIndex] < pFromEnd);

            pToBegin[index] = pFromBegin[rightIndex];
            index++;
            rightIndex++;
            continue;
        }

        else if (rightIndex >= rightEndIndex  && leftIndex < leftEndIndex)
        {
            assert(&pFromBegin[leftIndex] < pFromEnd);

            pToBegin[index] = pFromBegin[leftIndex];
            index++;
            leftIndex++;
            continue;
        }

        assert(&pFromBegin[rightIndex] < pFromEnd);
        assert(&pFromBegin[leftIndex] < pFromEnd);

        if (pFromBegin[leftIndex] <= pFromBegin[rightIndex])
        {

            pToBegin[index] = pFromBegin[leftIndex];
            leftIndex++;
        }

        else
        {
            pToBegin[index] = pFromBegin[rightIndex];
            rightIndex++;
        }

        index++;
    }

   /* cout << "After merge they are now one..." << endl;

    for (int i = 0; i < size; i ++)
        cout << pToBegin[i] << endl;

    cout << endl << endl << endl << endl << endl;*/
}

void mergesort(float* pBegin, float* pEnd){

    int size = pEnd - pBegin;
    float* pTemp  = new float [size];

    //För size = 16:
    //2, 4, 8, 16

    for (int n = 2; n <= size; n*=2)
    {
        //Ladda över pBegin till pTemp (?)
        for (int i = 0; i < size; i++)
        {
            pTemp[i] = pBegin[i];
        }

        //För n=2:
        //0->2, 2->4, 4->6...

        //För n=4;
        //0->4, 4->8, 8->16
        int last = 0;
        for (int i = 1; i * n <= size; i++)
        {
            merge(pTemp + last, pTemp+i*n, n, pBegin + last);
            last = i*n;
        }
    }
    delete [] pTemp;
}
