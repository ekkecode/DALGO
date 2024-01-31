#include "ragnarstest2.h"
#include "student2reference.h"

#include "stuff.h"


#include <QThread>
#include <string>
#include <iostream>
#include <cassert>

using namespace ragstuff;

using namespace std;



bool okName2(){
    string name = nameOfTheStudent2();

    if (name=="Homer Simpson"){
        cout << "nameOfStudent2() returnerar inte DITT namn!" << endl;
        assert( false );
    }
    return true;
}


bool ragnarsTest2(){

    slout  << endl << endl << "Ragnars test 2" << endl;

    verifyStudentsName(nameOfTheStudent2());

    slout << "Detta uppdrag har ingen test. "<< endl
          << "Verifier själv att du skrivit vettiga svar" << endl
          << "där det star TODO!" << endl;

    return true;
}
