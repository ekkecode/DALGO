#include "ragnarstest2.h"

#include "student2stackl.h"
#include <string>
#include <cassert>
#include <iostream>
#include <chrono>
#include <thread>

#include "stuff.h"

using namespace  std;
using namespace chrono;
using namespace  this_thread;
using namespace ragstuff;


static bool test(){
    cout << endl << "test: Nu skapas ett StackL -objekt" << endl;
    StackL stack1;

    cout << "test: pushar på talen 1,2,3 och 4.5" << endl;

    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4.5);

    cout << "test: verifierar att toppvärdet är 4.5" << endl;

    assert( stack1.top() == 4.5 );

    cout << "test: verifierar size är 4" << endl;

    assert( stack1.size() == 4 );

    cout << "test: skapa kopiorna stack2 och stack3" << endl;

    StackL stack2 = stack1;
    StackL stack3 = stack2;

    cout << "test: poppa fran stack2, verifiera att storleken blev 3" << endl;

    stack2.pop();
    assert( stack2.size() == 3 );

    cout << "test: verifiera att stack1.top()==4.5" << endl;

    assert( stack1.top() == 4.5 );

    cout << "test: verifiera att stack2.top()==3" << endl;

    assert( stack2.top() == 3 );


    cout << "test: poppa från stack2 tills size()==0" << endl;

    while( stack2.size() > 0){
        stack2.pop();
    }

    cout << "test: ok" << endl;

    return true;
}



bool ragnarsTest2(){

    cout <<  endl << nameOfStudent2() << " nu kors ragnarsTest2" << endl;

    sleep_for( milliseconds(500));

    verifyStudentsName( nameOfStudent2() );


    cout << "Nedanför måste det stå att den lyckats..." << endl;


    bool ok = test();

    if (ok)
        cout << "Grattis ragnarsTest2 lyckades!" << endl << endl;
    else cout << "SORRY! ragnarsTest2 misslyckades!" << endl << endl;

    assert( ok );

    return ok;
}
