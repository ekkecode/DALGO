#include "studentbinsearch1.h"

#include "ragnarstest.h"
#include <cassert>

#include <iostream>
using namespace std;


const char* nameOfStudent1(){
    return "Emil Kronholm";
}


/****************************************************************
ANROP:    bool exist = containedInSortedarray(x, pBegin, pEnd);
VERSION:  ...
UPPGIFT:  Returnerar true omm *p==x för något p i
          intervallet [pBegin, pEnd), dvs pBegin <= p < pEnd
          (observera att pEnd skall peka på första elementet efter arrayen)
OBS:      Alla tal mellan pBegin och pEnd måste vara sorterade i
          stigande ordning
*****************************************************************/
bool containedInSortedarray(int x, const int* pBegin, const int* pEnd)
{
    if (pEnd - pBegin <= 0) return false;
    if (pEnd - pBegin == 1) return (x == *pBegin);


    const int* pMiddle = pEnd - (pEnd - pBegin)/2;

    if (x >= *pMiddle) return containedInSortedarray(x, pMiddle, pEnd);
    if (x < *pMiddle) return containedInSortedarray(x, pBegin, pMiddle);

}

void studentsTest1(){

    cout << "Har borde studentens testresultat synas" << endl << endl;

   // TODO din egen testkod som anropar contains här


    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr1[9] = {10, 11, 23, 52, 56, 67, 68, 70, 71};

    assert(!containedInSortedarray(10, arr, arr+9));
    assert(!containedInSortedarray(0, arr, arr+9));

    assert(containedInSortedarray(1, arr, arr+9));
    assert(containedInSortedarray(9, arr, arr+9));
    assert(containedInSortedarray(5, arr, arr+9));

    assert(!containedInSortedarray(69, arr1, arr1+9));

    assert(containedInSortedarray(11, arr1, arr1+9));
}
