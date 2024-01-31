#include "experiments.h"

#include "sortingalgorithms.h"

#include <QElapsedTimer>
#include "dalgorandom.h"
#include <algorithm>
#include <iostream>
using namespace std;



/***********************************************************************

 Resultat av experimenten:

 TODO


Fyll i körttid OCH komplexitet i nedanstående tabell

----------------------------------------------------------------
            |     ordnat   |   nästan ordnat  |   slumpmässigt |
----------------------------------------------------------------
bubbleSort  | 15s    O(n^2)|  15s      O(n^2) | 51s    O(n^2)  |
----------------------------------------------------------------
insertSort  | 0.001s  O(n) |  0.001s   O(n)   | 9.051s O(n^2)  |
----------------------------------------------------------------

TODO fyll också i nedanstående!

körtiden för insertSort (slumpmässig) skattas med t(n) = c*n^2
där c = ...9E-10

Tiden att sortera sortera 10 miljoner tal borde då bli
9E-10 * (1E7)^2 = 9E-10 * E+14
= 9E+4 = 90 000 sekunder, dvs 25 timmar.

Med std::sort tog det 3,284 s att sortera 10 miljoner tal.



************************************************************************/

void fillWithRandom(float arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = dalgoRandom();
    }

}

void fillWithRandomSorted(float arr[], const int size)
{
    arr[0] = 0;

    for (int i = 1; i < size; i++)
    {
        arr[i] = arr[i-1] + dalgoRandom();
    }
}

void fillWithAlmostSorted(float arr[], const int size)
{
    assert(size >= 2);

    fillWithRandomSorted(arr, size);

    float temp = arr[0];
    arr[0] = arr[size-1];
    arr[size-1] = temp;
}

float timeBubble(float arr[], int size)
{
    QElapsedTimer myTimer ;
    myTimer.start();
    bubbleSortI(arr, &arr[size]);
    qint64 a = myTimer.elapsed();
    return ( float ) a / 1000.0;
}

float timeInsert(float arr[], int size)
{
    QElapsedTimer myTimer ;
    myTimer.start();
    insertSortP(arr, &arr[size]);
    return ( float ) myTimer.elapsed () / 1000.0;
}

void sixExperiments()
{

    cout << endl << endl << "sixExperiments()" << endl ;

    // Om du gör detta frivilliga uppdrag behöver du skriva kod här.
    // Du behöver också skriva funktioner som fyller
    // arrayer på olika sätt, sorterar, och mäter tid.
    //
    // Skriv inte koden så att du manuellt måste byta ut sorteringsfunktionerna
    // när du gör dina experiment, utan skriv koden så att denna funktion utför
    // alla 6 experimenten i följd! (Självklart får du dela upp koden i flera funktioner)
    // Låt sådan all kod ligga kvar så att jag kan upprepa dina experiment
    // utan att ändra i din kod.
    // One more thing: Tänk på att sorteringsalgoritmerna sorterar, och att du därför
    // måste återställa arrayernas slumpmässighet innan varje sortering (skriv gärna
    // hjälpfunktioner som fillWithRandom, fillWithRandomSorted, fillWithAlmostSorted).

    // Redogör för resultatet med en tabell i kommentaren överst i denna fil.
    const bool bubble = true;
    const bool insert = true;

    const long long int size = 100000;
    float *arr = new float[size];

    if (bubble)
    {
        //BUBBLESORT
        fillWithRandomSorted(arr, size);
        cout << "BUBBLESORT (sorted) tog: " << timeBubble(arr, size) << " sekunder." << endl;

        fillWithAlmostSorted(arr, size);
        cout << "BUBBLESORT (almost sorted) tog: " << timeBubble(arr, size) << " sekunder." << endl;

        fillWithRandom(arr, size);
        cout << "BUBBLESORT (random) tog: " << timeBubble(arr, size) << " sekunder." << endl;
    }

    if (insert)
    {
        //INSERTSORT
        fillWithRandomSorted(arr, size);
        cout << "INSERTSORT (sorted) tog: " << timeInsert(arr, size) << " sekunder." << endl;

        fillWithAlmostSorted(arr, size);
        cout << "INSERTSORT (almost sorted) tog: " << timeInsert(arr, size) << " sekunder." << endl;

        fillWithRandom(arr, size);
        cout << "INSERTSORT (random) tog: " << timeInsert(arr, size) << " sekunder." << endl;
    }

    cout << endl << "sixExperiments()" << endl;

    delete [] arr;
}


void stdSortExperiment()
{
    const long long int size = 10000000;
    float *arr = new float[size];

    cout << endl << endl << "stdSortExperiment()" << endl;
    fillWithRandom(arr, size);
    QElapsedTimer myTimer ;

    myTimer.start();
    std::sort(arr, &arr[size]);
    cout << "Det tog med STD::sort: " << ( float ) myTimer.elapsed () / 1000.0<< " sekunder.";

    delete [] arr;
}

const char* nameOfStudent2(){
    return "Emil Kronholm"; // ändra till ditt namn
}

