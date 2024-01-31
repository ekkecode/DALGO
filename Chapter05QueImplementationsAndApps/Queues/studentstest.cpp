#include "studentstest.h"
#include "ragnarstest.h"
#include <cassert>
#include <iostream>

#include "student3_listque.h"
#include "student4_arrayque.h"
#include "student5_adeque.h"

using namespace std;


void studentstest(){

    // skriv din egen testkod här
    //return;
    cout << "Haer boer studentens testrsultat synas" << endl;

    ADeque que;

    for (int i = 0; i < 10; i++)
    {
        que.pushBack(i);
        que.pushFront(i);

    }

    for (int i = 0; i < 5; i++)
    {
        que.popBack();
    }

    que.testing();

    assert(que.back() == 4);
    assert(que.front() == 9);


}

