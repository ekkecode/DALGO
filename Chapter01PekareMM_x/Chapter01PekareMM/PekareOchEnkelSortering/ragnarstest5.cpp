#include "ragnarstest5.h"
#include "student5Sortings.h"
#include "stuff.h"


#include <QThread>
#include <iostream>
#include <string>
#include <cassert>

using namespace ragstuff;
using namespace std;



typedef void(*FuncSorterare)(float* pBegin,  float* pEnd);






/**************************************************************
ANROP:     doTheSwap((a),(b));
VERSION:   2005-10-05 NORA
UPPGIFT:   Byter a mot b.
**************************************************************/
static void doTheSwap(float &a, float &b){
    float tmp = a;
    a = b;
    b = tmp;
}// doTheSwap


// Testar om angiven sorteringsalgoritm fungerar.
// Felutskrift om så inte är fallet.
// Returnerar true omm ok.
bool testAlgorithm(FuncSorterare simpleSort, string name){

    slout << "testar " << name <<endl;

    const int size = 100;
    // skapa en sekvens (seq) av slumptal sorterad i stigande ordn.
    float seq[size];
    seq[0] = -10;
    for (int i = 1; i<size; ++i)
    {
        float d = ragstuff::dalgoRandom();
        seq[i] = seq[i - 1] + d; // - d;
    }

    // låt mixed innehålla samma tal men i slumpordning
    // pÂ varje sida utanför arrayen ligger det en 1a, som
    // ej får ändras av sorteringsalgoritmenn

    float mixedExtraLarge[size + 2];
    float *mixed = &mixedExtraLarge[1]; // -1...size
    for (int i = 0; i<size; ++i)
        mixed[i] = seq[i];
    for (int i = 0; i<size; ++i){
        int j = i+ragstuff::dalgoRandom()*(size-i);
        assert( j< size );
        doTheSwap((mixed[i]), (mixed[j]));
    }
    mixed[-1] = +99.0;
    mixed[size] = -99.0;

    simpleSort( &mixed[0], &mixed[size]);

    bool ok = true;
    if (mixed[-1] != 99.0 || mixed[size] != -99.0){
        slout << "  BUG: Algoritmen " << name << " skriver utanför (array)minnet!\7\n";
        assert( false );
    }

    if (ok)
        for (int i = 0; i<size; ++i)
            if (mixed[i] != seq[i])
            {
                slout << "BUG: i algoritm " << name <<  " mixed[" << i << "]==" << mixed[i] <<" != " << seq[i] << endl;
                assert( false );
            }

    slout << "   ok" << endl;

    return ok;

}




bool okName5(){
    string name = nameOfTheStudent5();
    if (name=="Homer Simpson"){
        cout << "nameOfStudent5() returnerar inte DITT namn!" << endl;
        assert(false);
    }
    return true;
}


bool ragnarsTest5(){
    slout  << "Ragnars test 5" << endl
           << "Om testen lyckas kommer ett meddelande som anger detta att skrivas ut" << endl
           << "annars har du en bug" << endl;

    verifyStudentsName( nameOfTheStudent5() );

    bool ok = testAlgorithm( bubbleSortI, "bubbleSortI")
           && testAlgorithm( bubbleSortP, "bubbleSortP")
           && testAlgorithm( insertSortI, "insertSortI")
           && testAlgorithm( insertSortP, "insertSortP") ;

    if (!ok)
        slout << endl << "Ragnars test 5 MISSLYCKADES! \7" << endl;
    else slout << endl << "Grattis, Ragnars test 5 lyckades! " << endl << endl;

    assert(ok);
    return ok;


}
