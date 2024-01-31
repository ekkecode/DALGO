#include "studentsvenska.h"

#include <iostream>
#include <cassert>

#include <string>

using namespace std;

string svenskaFranHeltal(unsigned int tal)
{

    string uppTillTjugo[21]{"noll","ett","två","tre","fyra","fem","sex",
                            "sju","åtta", "nio","tio","elva", "tolv","tretton",
                            "fjorton", "femton", "sexton", "sjutton", "arton",
                            "nitton", "tjugo"};

    string tiotal[]{"xxx", "yyy", "tjugo", "trettio", "fyrtio", "femtio", "sextio",
                    "sjuttio", "åttio", "nittio"};

    if (tal<=20) return uppTillTjugo[tal];

    if (tal<100)
    {
        if (tal%10 == 0) return tiotal[tal/10];
        else return tiotal[tal/10] + svenskaFranHeltal(tal % 10);
    }

    if (tal<1000)
    {
        string extra = (tal%100 == 0) ? "" : svenskaFranHeltal(tal%100);
        return uppTillTjugo[tal/100] + "hundra" + extra;
    }
    //1000 - 999 999
    if (tal<1000000)
    {
        //Bryter mot en lag men det borde vara okej. För i första delen skickas ett 10-tal in. I andra delen ett 1000-tal.
        //Då de är helt oberoende på alla olika plan måste ändå två separa beräkningar göras!

        string extra = (tal%1000 == 0) ? "" : svenskaFranHeltal(tal%1000);
        return svenskaFranHeltal(tal/1000) + "tusen" + extra;
    }

    //1 000 000 - 999 999 999
    if (tal < 1000000000)
    {
        string extra = (tal%100000 == 0) ? "" : svenskaFranHeltal(tal%1000000);
        //Specialfall då vi behöver använda "en". "Går att göra bättre om man tar bort "-er" :)
        if (tal/1000000 == 1) return "enmiljoner" + extra;
        return svenskaFranHeltal(tal/1000000) + "miljoner" + extra;
    }

    //1 000 000 000 - *
    string extra = (tal%1000000 == 0) ? "" : svenskaFranHeltal(tal%1000000000);
    if (tal/1000000000 == 1) return "enmiljard" + extra;
    return svenskaFranHeltal(tal/1000000000) + "miljarder" + extra;
}


void studentTest()
{

    cout << "Student test, verifiera okulärt." << endl;

    cout << svenskaFranHeltal(10) << endl;
    cout << svenskaFranHeltal(20) << endl;
    cout << svenskaFranHeltal(99) << endl << endl;

    cout << svenskaFranHeltal(100) << endl;
    cout << svenskaFranHeltal(523) << endl;
    cout << svenskaFranHeltal(999) << endl << endl;


    cout << "1000 test" << endl;
    cout << svenskaFranHeltal(1000) << endl;
    cout << svenskaFranHeltal(5232) << endl;
    cout << svenskaFranHeltal(9999) << endl;
    cout << svenskaFranHeltal(9990) << endl << endl;

    cout << "10 000 test" << endl;
    cout << svenskaFranHeltal(10000) << endl;
    cout << svenskaFranHeltal(30002) << endl;
    cout << svenskaFranHeltal(10903) << endl << endl;

    cout << svenskaFranHeltal(52322) << endl;
    cout << svenskaFranHeltal(99999) << endl;
    cout << svenskaFranHeltal(99900) << endl;
    cout << svenskaFranHeltal(99996) << endl << endl;

    cout << "100 000 test" << endl;
    cout << svenskaFranHeltal(100000) << endl;
    cout << svenskaFranHeltal(300002) << endl;
    cout << svenskaFranHeltal(100903) << endl << endl;

    cout << svenskaFranHeltal(523322) << endl;
    cout << svenskaFranHeltal(999999) << endl;
    cout << svenskaFranHeltal(999002) << endl;
    cout << svenskaFranHeltal(999966) << endl << endl;

    cout << "1 000 000 test" << endl;
    cout << svenskaFranHeltal(1000000) << endl;
    cout << svenskaFranHeltal(1298507) <<endl;
    cout << svenskaFranHeltal(999999999) <<endl << endl;

    cout << "1 000 000 000 test" << endl;
    cout << svenskaFranHeltal(1000000000) << endl;
    cout << svenskaFranHeltal(4123298507) << endl;


}
