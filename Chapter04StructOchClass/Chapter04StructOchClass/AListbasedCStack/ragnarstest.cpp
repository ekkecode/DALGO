#include "ragnarstest.h"

#include "student1cstackl.h"
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



bool test1(){
    cout << endl << "test1: skapar en tom CStack och en kopia på denna" << endl;
    CStackL stack1 = CStackLConstruct();
    CStackL stack2 = CStackLConstruct(stack1);
    cout << "test1: verifierar att bada stackarna har size == 0" << endl;

    assert(  CStackLSize(&stack1)==0 );
    assert(  CStackLSize(&stack2)==0 );
    cout << "test1: ok" << endl;
    return true;
}

bool test2(){
    cout << endl << "test2: skapar en tom CStack och pushar på ett tal" << endl;
    CStackL stack1 = CStackLConstruct();
    CStackLPush(&stack1,1);
    cout << "test2: skapar kopiorna stack1 och stack2" << endl;

    CStackL stack2 = CStackLConstruct(stack1);
    CStackL stack3 = CStackLConstruct(stack2);

    cout << "test2: veriefierar att size==1 för bägge kopiorna" << endl;

    assert(  CStackLSize(&stack2)==1 );
    assert(  CStackLSize(&stack3)==1 );
    cout << "test2: ok" << endl;

    return true;
}



bool test3(){
    cout << endl << "test3: pushar 1,2,3 och 4.5" << endl;

    CStackL stack1 = CStackLConstruct();
    CStackLPush( &stack1,  1);
    CStackLPush( &stack1,  2);
    CStackLPush( &stack1,  3);
    CStackLPush( &stack1,  4.5);

    cout << "test3: verifierar att topp-värdet är 4.5" << endl;
    assert( CStackLTop(&stack1) == 4.5 );
    cout <<  "test3: verifierar att size är 4" << endl;
    assert( CStackLSize(&stack1) == 4 );


    cout << "test3: skapar kopia på stacken" << endl;

    CStackL stack2 = CStackLConstruct(stack1);

    cout <<  "test3: poppar från kopian och verifierar att size blir 3" << endl;

    CStackLPop( &stack2);
    assert( CStackLSize(&stack2) == 3 );

    cout <<  "test3: skapa ny kopia" << endl;

    CStackL stack3 = CStackLConstruct(stack2);

    cout <<  "test3: verifierar att dess size blir 3" << endl;

    assert(  CStackLSize( &stack3 ) == 3 );

    cout <<  "test3: verifierar att stack1 och 2 ej ändrats" << endl;

    assert( CStackLTop( &stack1 ) == 4.5 );
    assert( CStackLTop( &stack2 ) == 3 );

    cout <<  "test3: poppar tills storleken blir 0" << endl;

    while( CStackLSize(&stack2) > 0){
        CStackLPop( &stack2 );
    }

    cout <<  "test3: destruerar stack1, stack2 och stack3" << endl;

    CStackLDestruct( &stack1 );
    CStackLDestruct( &stack2 );
    CStackLDestruct( &stack3 );

    cout <<  "test3: ok" << endl;

    return true;
}


bool test(){

    //return test3();
    bool ok = test1()
             && test2()
             && test3();
    return ok;
}


bool ragnarsTest1(){

    cout <<  endl << endl << nameOfStudent1()  << " nu kors ragnarsTest1" << endl;

    verifyStudentsName( nameOfStudent1() );


    cout << "Nedanför måste det stå att den lyckats..." << endl << endl;

    bool ok = test();


    if (ok)
        cout << "Grattis ragnarsTest1 lyckades!" << endl << endl;
    else cout << "SORRY! ragnarsTest1 misslyckades!" << endl << endl;

    assert( ok );

    return ok;
}
