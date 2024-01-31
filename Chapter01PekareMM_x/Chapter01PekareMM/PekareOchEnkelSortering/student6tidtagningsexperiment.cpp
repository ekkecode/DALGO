#include "student6tidtagningsexperiment.h"
#include "student1.h"
#include "dalgorandom.h"
#include "student5Sortings.h"

#include <QElapsedTimer>
#include <math.h>
#include "student5Sortings.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

typedef void(*FuncSorterare)(float* pBegin,  float* pEnd);

float timeToSort(FuncSorterare sorter, const char* nameOfFunction, int sizeOfArray){
    float *pArr = new float[sizeOfArray];
    for (int i=0; i<sizeOfArray; ++i){
        pArr[i] = dalgoRandom();
    }
    cout << "Vi kommer nu att sortera " << sizeOfArray << " tal med " << nameOfFunction << ", tryck return!:";
    string str;
    getline(cin, str);


    QElapsedTimer myTimer;
    myTimer.start();

    sorter(pArr, pArr+sizeOfArray);

    float elapsedTime = (float) myTimer.elapsed()/ 1000.0;
    cout << "Fardig! Och det tog " << elapsedTime << " sekunder. \n";
    cout << "(Arrayens värden ligger mellan " << pArr[0] << " och " << pArr[sizeOfArray-1] << ")" << endl;

    delete [] pArr;
    return elapsedTime;
}

void ragnarsTidtagningsexperiment(){
    int size = 100000;
    cout << "Välkommen till Ragnars tidtagningexpreimet!\n";
    cout << "Vi skall sortera " << size << " element pa olika satt!" << endl << endl;

    cout << "Skriv körtiderna i nedanstående komentar (i programfilen)!\n";

    cout << "(Det kan dröja upp till nagon minut!)\n";


    timeToSort( bubbleSortI, "bubbleSortI", size );
    timeToSort( bubbleSortP, "bubbleSortP", size );
    timeToSort( insertSortI, "insertSortI", size );
    timeToSort( insertSortP, "insertSortP", size );

    cout << "ok, lat oss ocksa prova std::sort (som behandlas senare i kursen)\n";

    timeToSort( std::sort, "std::sort", size );

/*
    TODO: skriv vilka körtider du fick!
    Körtider (5 st):

    BubblesortI 28.297 sek
    BubblesortP 25.79 sek
    InsertSortI 5.316 sek
    InserSortP 3.613 sek
    std::sort 0.011 sek



  */
}

void mainFunctionInStudent6(){
    cout << "\n\n\n################ testingCode6 #################\n\n";

    ragnarsTidtagningsexperiment();
}
