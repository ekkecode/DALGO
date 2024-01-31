#include "ragnarstest3.h"
#include "student3swaps.h"
#include "stuff.h"

#include <string>
#include <iostream>
#include <qthread.h>
#include <cassert>

using namespace ragstuff;

using namespace std;

bool okName3(){
    string name = nameOfTheStudent3();
    QThread::msleep(100);

    if (name=="Homer Simpson"){
        cout << "nameOfStudent3() returnerar inte DITT namn!" << endl;
        assert( false);
    }
    return true;
}




bool testSwaps(){
    slout << "testar swap " << endl;



    float x0 = 9.9f;
    float y0 = 1.9f;

    float x = x0;
    float y = y0;
    swap(&x, &y);
    assert( x==y0 && y==x0 );

    swap(x,y);
    assert( x==x0 && y==y0 );

    return true;
}




bool ragnarsTest3(){

    slout << "\n\nRagnars test 3." << endl
          << "nar testen ar klar skall det sta att den lyckats" << endl;

    verifyStudentsName(nameOfTheStudent3());

    bool ok = testSwaps();
    if (ok)
        slout << "Grattis test 3 lyckades" << endl;
    assert(ok);
    return ok;
}
