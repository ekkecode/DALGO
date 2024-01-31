#include "student3swaps.h"
#include "dalgorandom.h"
#include "ragnarstest3.h"

#include <cassert>
#include <iostream>
using namespace std;

const char* nameOfTheStudent3(){
    return "Emil Kronholm";  // Byt ut denna sträng mot ditt eget namn!
}


// ################ Implementera swap med pekar- och referensanrop #################



// ANROP:   swap(a,b); eller swap( (&a), (&b) );
// UPPGIFT: Byter värden mellan a och b.
void swap(float* pA, float* pB)
{
    const float originalA = *pA;
    *pA = *pB;
    *pB = originalA;
}

// ANROP:   swap(a,b); eller swap((a), (b));
// UPPGIFT: Byter värden mellan a och b.
void swap(float &a, float &b)
{
    const float originalA = a;
    a = b;
    b = originalA;
}

// För att öva på referenser ger jag här en
// lite annorluna implementerting av max.
float& max(float &a, float &b)
{
    if (a>b)
        return a;
    return b;
}



void testaMax()
{
    float a = 42;
    float b = 108;

    cout << "maximum is " << max(a,b) << endl;

    max(a,b) = 1;

    cout << "a=" << a << " , b=" << b << endl;

    /* OBS! Förklara vad ovanstående max(a,b) = 1 gör, och varför!
     *
     * Självfallet, här kommer en förklaring!
     *
     * max(a, b) returnerar en referens till den största variabeln av a och b, eller b om de är lika.
     * max(a, b) ändrar alltså den största variablen av a, b (eller b om de är lika) till 1.
     *
     * Förtydligande: Med referens menar jag en referens till en variabel. Ändrar man referensen har man ändrat variablen och vice versa.
     *
     *
     *
     *
     *
     *
     *
     */

}


void studentsTest3(){
  // TODO! Skriv din testkod här
  // Testa båda dina swap versioner

    float a = 1;
    float b = -1;

    swap(a, b);

    assert(a == -1);
    assert(b == 1);

    swap(&a, &b);

    assert(a == 1);
    assert(b == -1);
}



void mainFunctionInStudent3(){

    cout << "\n\n\n################ testingCode3 #################\n\n";

    studentsTest3();
    testaMax();

    ragnarsTest3();
}
