
#include "studentArrayrekursioner.h"
#include <cassert>
#include <iostream>
#include <random>

using namespace std;


std::string nameOfStudent(){
    return "Emil Kronholm";  // TODO andra till ditt namn!
}



float sum(const float *pBegin, const float *pEnd)
{
    if (pBegin >= pEnd)
    {
        return 0;
    }

    return *pBegin + sum(pBegin+1, pEnd);
}


void fillValue(float value,  float *pBegin,  float *pEnd)
{
    if (pBegin >= pEnd)
    {
        return;
    }

    *pBegin = value;

    fillValue(value, pBegin+1, pEnd);

}
bool hasValueInRange(float min, float max, const float *pBegin, const float *pEnd)
{
    if (pBegin >= pEnd) return false;

    return (min <= *pBegin && *pBegin < max)
        || hasValueInRange(min, max, pBegin+1, pEnd);
}

int numberOfValuesInRange(float min, float max, const float *pBegin, const float *pEnd)
{
    if (pBegin >= pEnd) return 0;

    return (min <= *pBegin && *pBegin < max)
         + numberOfValuesInRange(min, max, pBegin+1, pEnd);
}



void studentTest()
{
    float arr[5] = {1, -5, 3, 2, -1};

    assert(sum(arr, &arr[5]) == 0);

    assert(hasValueInRange(-5, 3, arr, &arr[5]));
    assert(hasValueInRange(-4, 1.1, arr, &arr[5]));
    assert(!hasValueInRange(-4, -1, arr, &arr[5]));
    assert(numberOfValuesInRange(-5, 3, arr, &arr[5]) == 4);
    assert(numberOfValuesInRange(-4, -1, arr, &arr[5]) == 0);

    float arr1[5];

    fillValue(5, arr1, &arr1[5]);

    for (float f : arr1)
    {
        assert(f == 5);
    }
}


// ------------


