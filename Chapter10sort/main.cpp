#include <QCoreApplication>

#include "ragnarstest.h"

void testing();



int main(int argc, char *argv[])
{
    //testing();
    //return 0;

    QCoreApplication a(argc, argv);

    bool testHeapsort  = false;  // Ändra till false om du ej implementerat heapsort
    bool testMergesort = true;  // Ändra till false om du ej implementerat mergesort

    ragnarsTest(testHeapsort, testMergesort);

    return a.exec();
}
