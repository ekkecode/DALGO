// studentsFile.cpp

#include "towers.h"
#include "studentsTreTorn1.h"

extern Towers TOWERS;

const char* nameOfStudent(){
    return "Emil Kronholm";
}


// Returnerar den 3:e pinnen som varken är pinFrom eller pinTo
int otherPin(int pinFrom, int pinTo){
    return 0+1+2 - pinFrom - pinTo;
}


void moveDiscs(int numberOfDiscs, int pinFrom, int pinTo)
{
    if (numberOfDiscs == 1)
    {
        TOWERS.moveDisc(pinFrom, pinTo);
        return;
    }

    int pinOther = otherPin(pinFrom, pinTo);

    moveDiscs(numberOfDiscs-1, pinFrom, pinOther);
    TOWERS.moveDisc(pinFrom, pinTo);
    moveDiscs(numberOfDiscs-1, pinOther, pinTo);
}


