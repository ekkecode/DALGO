#include "student1mergesort.h"

#include <cassert>
#include <iostream>

using namespace std;

const char* nameOfStudentMergesort(){
    return "Emil Kronholm";
}

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

/*
void merge(const float* pFromBegin,  const float *pFromEnd, int sizeOfFromRuns, float *pToBegin)
{

    const int size = pFromEnd - pFromBegin;

    int leftIndex = 0;
    int rightIndex = sizeOfFromRuns/2;

    const int leftEndIndex = sizeOfFromRuns/2;
    const int rightEndIndex = size;

    int index = 0;

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
}*/


void merge(const float* pFromBegin,  const float *pFromEnd, int sizeOfFromRuns, float *pToBegin)
{

    const int size = pFromEnd - pFromBegin;

    int leftIndex = 0;
    int rightIndex = sizeOfFromRuns/2;

    const int leftEndIndex = sizeOfFromRuns/2;
    const int rightEndIndex = size;

    int index = 0;

    while (index < size)
    {
        int* smallerLorR;

        //Left or right is empty
        if (rightIndex >= rightEndIndex || leftIndex >= leftEndIndex)
            smallerLorR = (rightIndex >= rightEndIndex) ? &leftIndex : &rightIndex;
        else
            smallerLorR = (pFromBegin[leftIndex] <= pFromBegin[rightIndex]) ? &leftIndex : &rightIndex;

        pToBegin[index] = pFromBegin[*smallerLorR];
        index++;
        *(smallerLorR) += 1;
    }
}

void mergesort(float* pBegin, float* pEnd){

    int size = pEnd - pBegin;
    float* pTemp  = new float [size];

    //För size = 16:
    //2, 4, 8, 16
    for (int n = 2; n <= size; n*=2)
    {
        //Kopiera över pBegin till pTemp
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

//Std::sort -> 1447 ms
//Emils otroliga merge: 2146
