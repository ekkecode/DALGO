#include "student1.h"
#include <cassert>
#include "ragnarstest1.h"
#include "dalgorandom.h"

#include <iostream>
using namespace std;


// Läs Detta!

// Pekaruppdragen går ut på att implementera nedastående funktioner
// Många funktioner skall implementeras på två olika sätt (I och P):
// Version I: Räkna ut size och använd arraynotation med hakparanteser och heltalsindex.
// Version P: Använd istället pekarnotation, dvs  *p,  p+=1,  etc.




// ************************************************************
// ANROP:   char* namn = nameOfStudent1();
// UPPGIFT: Returnerar ditt namn!
// ************************************************************
const char* nameOfTheStudent1(){
    return "Emil Kronholm";  // Byt ut denna sträng mot ditt eget namn!
}




// ################ version I, löses med [ ]  och indexnotation #############



// ************************************************************
// ANROP:   float value = minimumI(&arr[0], &arr[size]);
// UPPGIFT: Returnerar arrayens minsta värde
// ************************************************************
float minimumI(const float *pBegin, const float *pEnd){

    // Jag låter min egen lösnin ligga kvar.
    // Förstå denna! Lös de andra uppgifterna själv.

    assert( pBegin < pEnd );

    int size = pEnd - pBegin;
    float extreme = pBegin[0];
    for (int i=0; i<size ; i+=1)
        if (pBegin[i]<extreme)
            extreme = pBegin[i];
    return extreme;
}


// ************************************************************
// ANROP:   float value = maximumI( &arr[0], &arr[size] );
// UPPGIFT: Returnerar arrayens största värde
// ************************************************************
float maximumI(const float *pBegin, const float *pEnd)
{
    assert(pEnd > pBegin);

    const int size = pEnd - pBegin;
    float extreme = pBegin[0];

    for (int i = 1; i < size; i++)
    {
        if (pBegin[i] > extreme)
        {
            extreme = pBegin[i];
        }
    }

    return extreme;
}


// ************************************************************
// ANROP:   float value = sumI( &arr[0], &arr[size] );
// UPPGIFT: Returnerar summan av alla element.
// ************************************************************
float sumI(const float *pBegin, const float *pEnd)
{
    assert(pEnd > pBegin);

    float sum = pBegin[0];

    for (int i = 1; i < (pEnd - pBegin); i++)
    {
        sum += pBegin[i];
    }

    return sum;
}


// ************************************************************
// ANROP:   fillRandomI( &arr[0], &arr[size] );
// UPPGIFT: Fyller arrayen med oberoende slumpdata
// ************************************************************
void fillRandomI(float *pBegin, float *pEnd)
{
    assert(pEnd > pBegin);

    for (int i = 0; i < (pEnd - pBegin); i++)
    {
        pBegin[i] = dalgoRandom();
    }
}

// ************************************************************
// ANROP:   fillSortedRandomI( &arr[0], &arr[size] );
// UPPGIFT: Fyller arrayen med sorterat slumpdata. Minst först
// ************************************************************
void fillSortedRandomI(float *pBegin, float *pEnd)
{
    assert(pEnd > pBegin);

    pBegin[0] = dalgoRandom();

    for (int i = 1; i < (pEnd - pBegin); i++)
    {
        pBegin[i] = pBegin[i - 1] + dalgoRandom();
    }
}



// ************************************************************
// ANROP:   bool contains = hasValueInRangeI(min, max, &arr[0], &arr[size] );
// UPPGIFT: Returnerar true om arrayen ett värde i det halvt öppna intervallet min <= x < max.
// ************************************************************
bool  hasValueInRangeI(float min, float max, const float *pBegin, const float *pEnd)
{
    assert (pEnd > pBegin);

    for (int i = 0; i < (pEnd - pBegin); i++)
    {
        if (pBegin[i] >= min && pBegin[i] < max)
        {
            return true;
        }

    }

    return false;
}

// ************************************************************
// ANROP:   int number = numberOfValuesInRange(min, max,  &arr[0], &arr[size] );
// UPPGIFT: Returnerar antalet värden som ligger i det halvt öppna intervallet  min <= x < max.
// ************************************************************
int numberOfValuesInRangeI(float min, float max, const float *pBegin, const float *pEnd)
{
    assert (pEnd > pBegin);

    unsigned int count = 0;

    for (int i = 0; i < (pEnd - pBegin); i++)
    {
        if (pBegin[i] >= min && pBegin[i] < max)
        {
            count += 1;
        }
    }

    return count;
}




// ################ version P, samma uppgifter löses nu med pekarnotation  ###############






float minimumP(const float *pBegin, const float *pEnd){
    // Jag låter min egen lösnin ligga kvar.
    // Förstå denna! Lös de andra uppgifterna själv.

    assert( pBegin < pEnd );
    float extreme = *pBegin;
    for (const float *p=pBegin ; p<pEnd; p+=1)
        if (*p<extreme)
            extreme = *p;
    return extreme;
}


float maximumP(const float *pBegin, const float *pEnd)
{
    assert(pEnd > pBegin);

    float extreme = *pBegin;
    for (const float *p = pBegin; p < pEnd; p++)
    {
        if (*p > extreme)
        {
            extreme = *p;
        }
    }

    return extreme;
}

float sumP(const float *pBegin, const float *pEnd)
{
    assert(pEnd > pBegin);

    float sum = 0;
    for (const float *p = pBegin; p < pEnd; p++)
    {
        sum += *p;
    }

    return sum;
}

void fillRandomP(float *pBegin, float *pEnd)
{
    assert(pEnd > pBegin);

    for (float *p = pBegin; p < pEnd; p++)
    {
        *p = dalgoRandom();
    }
}



void fillSortedRandomP(float *pBegin, float *pEnd)
{
    assert(pEnd > pBegin);

    *pBegin = dalgoRandom();
    for (float *p = pBegin + 1; p < pEnd; p++)
    {
        *p = dalgoRandom() + *(p-1);
    }
}



bool hasValueInRangeP(float min, float max, const float *pBegin, const float *pEnd)
{
    assert(pEnd > pBegin);

    for (const float *p = pBegin; p < pEnd; p++)
    {
        if (*p >= min && *p < max)
        {
            return true;
        }
    }

    return false;

}


int  numberOfValuesInRangeP(float min, float max, const float *pBegin, const float *pEnd)
{
    assert(pEnd > pBegin);

    unsigned int count = 0;

    for (const float *p = pBegin; p < pEnd; p++)
    {
        if (*p >= min && *p < max)
        {
            count += 1;
        }
    }

    return count;
}




// ################ Skriv din egen testkod här! #################


void testFilledSortedRandom()
{
    float arr1[10];
    fillSortedRandomI(arr1, &arr1[10]);

    for (int i = 1; i < 10; i++)
    {
        assert(arr1[i-1] < arr1[i]);
    }

    float arr2[10];
    fillSortedRandomP(arr2, &arr2[10]);

    for (int i = 1; i < 10; i++)
    {
        assert(arr2[i-1] < arr2[i]);
    }
}

void testFillRandom()
{
    float arr1[20];
    float arr2[20];
    fillRandomI(arr1, &arr1[20]);
    fillRandomI(arr2, &arr2[20]);

    float arr3[20];
    float arr4[20];
    fillRandomI(arr3, &arr3[20]);
    fillRandomI(arr4, &arr4[20]);



    //No number in these random will be the same!
    for (int i = 0; i < 20; i++)
    {
        assert(arr1[i] != arr2[i]);
        assert(arr3[i] != arr4[i]);
    }




    cout << "Visual confirmation on fillRandomI: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr3[i] << " ";
    }

    cout << endl << "Visual confirmation on fillRandomP: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << endl;
}

void studentsTest1(){

    // Testa själv dina funktioner här!
    // Det är OBLIGATRORISKT att anropa varje funktion som du själv
    // implementeratrat,  så att labansvarig kan se att du förstått hur funktionerna skall
    // anropas!

    // Helst bör du också skriva kod som verifierar att dina funktioner
    // returnerar korrekta resultat för vissa exempeel på indata.
    // Istället för att skriva ut ett felmedelande på skärmen bör du se
    // till så att programmet kraschar om det innehåller ett fel!
    // Man kan göra detta genom att anropa:
    //   assert( false );
    // Men istället för att skriva:
    // if (!isOk) // om inte okay..
    //    assert( false );  // ..krascha programmet!
    // Bör man skriva:
    //   assert( isOk );
    // Ännu bättre... Istället för att skriva isOK kan man skriva ett uttryck som
    // blir true eller false, exempelvis (förutsatt att arr[0]==1 och arr[1]==2)
    //   assert( averageElementP(&arr[0],  &arr[2]) == 1.5 );



    cout << "(dina egna tester borde komma har!)\n";

    //maximumI
    float arr1[] = {1, 2, -3, 10, 4};
    float arr2[] = {-10, -9, -10, 10, 11};

    assert(maximumI(&arr1[0], &arr1[5]) == 10);
    assert(maximumI(arr2, &arr2[5]) == 11.0);

    //Sum
    assert(sumI(arr1, &arr1[5]) == 14);
    assert(sumI(arr2, &arr2[5]) == -8);

    //fillRandomI & P
    testFillRandom();
    //fillRandom I & P
    testFilledSortedRandom();

    //hasValueInRangeI
    assert(!hasValueInRangeI(-2.9, 1, arr1, &arr1[5]));
    assert(hasValueInRangeI(-3, 1, arr1, &arr1[5]));
    assert(hasValueInRangeI(-8, 11.01, arr2, &arr2[5]));

    //numberOfValuesInRangeI
    assert(numberOfValuesInRangeI(-8, 11.01, arr1, &arr1[5]) == 5);
    assert(numberOfValuesInRangeI(1, 10, arr1, &arr1[5]) == 3);
    assert(numberOfValuesInRangeI(-8, 11.01, arr2, &arr2[5]) == 2);
    assert(numberOfValuesInRangeI(3, 4, arr2, &arr2[5]) == 0);

    //MaximumP
    assert(maximumP(&arr1[0], &arr1[5]) == 10);
    assert(maximumP(arr2, &arr2[5]) == 11.0);

    //Sum
    assert(sumP(arr1, &arr1[5]) == 14);
    assert(sumP(arr2, &arr2[5]) == -8);

    //hasValueInRangeI
    assert(!hasValueInRangeP(-2.9, 1, arr1, &arr1[5]));
    assert(hasValueInRangeP(-3, 1, arr1, &arr1[5]));
    assert(hasValueInRangeP(-8, 11.01, arr2, &arr2[5]));

    //numberOfValuesInRangeI
    assert(numberOfValuesInRangeP(-8, 11.01, arr1, &arr1[5]) == 5);
    assert(numberOfValuesInRangeP(1, 10, arr1, &arr1[5]) == 3);
    assert(numberOfValuesInRangeP(-8, 11.01, arr2, &arr2[5]) == 2);
    assert(numberOfValuesInRangeP(3, 4, arr2, &arr2[5]) == 0);



}




void mainFunctionInStudent1(){

    cout << "\n\n\n################ testingCode1 ################# \n\n";

    studentsTest1();

    ragnarsTest1();
}


