#include "studentbinsearch2.h"

#include <cassert>
#include <iostream>

using namespace std;


const char* nameOfStudent2(){
    return "Emil Kronholm";
}


// Returnerar pekare till det första tal som är >= x, eller
// pEnd om inget sådant tal finns.

const float* pointerToFirstElementGreaterOrEqualToX(float x, const float* pBegin, const float* pEnd)
{
    //2 BaseCases

    //If no elements are inside, return pEnd.
    if (pBegin >= pEnd) return pEnd;

    //If there the array contains single element, return it if its >= to X, otherwise return pEnd
    if (pEnd - pBegin == 1)
    {
        if (*pBegin >= x) return pBegin;
        else return pEnd;
    }

    const float* pMiddle = pEnd - (pEnd - pBegin)/2;

    if (*(pMiddle-1) < x && *pMiddle >= x) return pMiddle;

    //Kan inte skriva pMiddle + 1 för kan vi hamn i evighetsloop vid 2 element
    if (x <= *pMiddle) return pointerToFirstElementGreaterOrEqualToX(x, pBegin, pMiddle);
    if (x > *pMiddle) return pointerToFirstElementGreaterOrEqualToX(x, pMiddle, pEnd);
}






void studentsTest2(){

   cout << "Har borde studentens testresultat synas\n\n";

   float arr[] = {0.123, 0.234, 0.345, 0.5, 1, 12, 23.123, 23.124, 124};
   const float* a = pointerToFirstElementGreaterOrEqualToX(0.9001, arr, arr+10);
   assert(a == &arr[4]);

   a = pointerToFirstElementGreaterOrEqualToX(12, arr, &arr[9]);
   assert(a == &arr[5]);

   a = pointerToFirstElementGreaterOrEqualToX(123.124, arr, &arr[9]);
   assert(a == &arr[8]);

   a = pointerToFirstElementGreaterOrEqualToX(1000, arr, &arr[9]);
   assert(a == &arr[9]);

   a = pointerToFirstElementGreaterOrEqualToX(0.1, arr, &arr[9]);
   assert(a == arr);
}
