#include <QCoreApplication>
#include "studentstest.h"

#include "ragnarstest.h"

#include "stuff.h"
#include <iostream>

using namespace std;
using namespace ragstuff;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    cout   << "--------------------"  << endl
            << "Valkommen till Queues" << endl
            << "Nu kor vi studenttest" << endl
            << "--------------------"  << endl
            << endl;

    studentstest();

    bool testAQue  = false;    // Ange vilka tester du vill genomföra !
    bool testLQue   = true;
    bool testADeque   = false;

    ragnarsTest(testAQue, testLQue, testADeque);


    return a.exec();
}

