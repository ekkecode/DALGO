#include "studentbadgames.h"
#include <cassert>
#include <iostream>
#include <string>

using namespace std;

bool ragnarsTest1();

string nameOfStudent(){
    return "Emil Kronholm";
}

/**********************************************************
ANROP:   uint elva = oneMore( tio );
UPPGIFT: Returnerar inparametern+1
***********************************************************/
int oneMore(int a){
   return a+1;
}
/**********************************************************
ANROP:   uint nio = oneLess( tio );
UPPGIFT: Returnerar inparametern-1
***********************************************************/
int oneLess(int a){
   return a-1;
}

/**********************************************************
ANROP:   int s = sum(a,b);
UPPGIFT: Returnerar a+b;
***********************************************************/
int sum(int a, int b)
{
    if (b == 0) return a;

    //return 1 + sum(a, b - 1);
    return oneMore(sum(a, oneLess(b)));
}

/**********************************************************
ANROP:   int d = diff(a,b);
UPPGIFT: Returnerar a-b;
***********************************************************/
int diff(int a, int b)
{
    if (b == 0) return a;

    return oneLess(diff(a, oneLess(b)));
}

/**********************************************************
ANROP:   int prod = product(a,b);
UPPGIFT: Returnerar a*b;
***********************************************************/
int product(int a, int b)
{
    if (b == 1) return a;
    if (b == 0) return 0;

    return sum(a, product(a, oneLess(b)));
}

/**********************************************************
ANROP:   int result = pow(a,b);
UPPGIFT: Returnerar a upphöjt till b;
***********************************************************/
int pow(int a, int b)
{
    if (b == 0) return 1;

    return product(a, pow(a, oneLess(b)));
}

/**********************************************************
ANROP:   int factorial = fac(a);
UPPGIFT: Returnerar a!
***********************************************************/
int fac(int a)
{
    if (a == 0) return 1;

    return product(a, fac(oneLess(a)));
}


void studentsTest(){

    // testa alla funktiner här
    // Men skriv bara mycket små tal ( < 5 )
    // Annars kanske programmet kraschar pga
    // stackoverflow

    assert(sum(2,1) == 3);
    assert(diff(3,2) == 1);
    assert(product(3,3) == 9);
    assert(pow(2,3) == 8);
    assert(fac(4) == 24);



}

int main()
{

    studentsTest();

    ragnarsTest1();

}

