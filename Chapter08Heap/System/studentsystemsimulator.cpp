#include "studentsystemsimulator.h"

#include "stdio.h"

#include <iostream>
#include <string>
#include <iostream>
#include <queue>
#include <vector>
#include <assert.h>

#include <sstream>
#include <fstream>


using namespace std;


const char* nameOfStudent(){
    return "Emil Kronholm";
}

struct Customer{
    string m_name;
    unsigned long long int m_arrival;
    int    m_timeSpent;
};

struct Event{
    string m_name;
    int    m_timeToLeave;
    Event(string name, int timeToLeave): m_name(name), m_timeToLeave(timeToLeave) {}
};


struct AWorseThanB {
    bool operator()(const Event& a, const Event& b){
        return a.m_timeToLeave >b.m_timeToLeave;
    }
};

// ANROP:   string str = timestring( secondsAfterMidnight)
string timestring(int secondsAfterMidnight){

    const int secondsPerMinute = 60;
    const int secondsPerHour = 60 * secondsPerMinute;
    const int secondsPerDay  = 24 * secondsPerHour;

    int d = secondsAfterMidnight/secondsPerDay;
    int h = (secondsAfterMidnight / secondsPerHour ) % 24;
    int m = (secondsAfterMidnight / secondsPerMinute) % 60;
    int s = secondsAfterMidnight % secondsPerMinute;

    char buffer[100];
    snprintf ( buffer, 100, "[%d] %02d:%02d:%02d", d,h,m,s);

    return string( buffer );
}


// ANROP: infil >> customer;
istream& operator>>(istream& infil, Customer &customer){
    infil >> customer.m_name >> customer.m_arrival >> customer.m_timeSpent;
    return infil;
}



// Det kan vara lämpligt att flytta fram tiden med hjälp av denna funktion
// Funktionen verifierar att den nya tiden är större än den gamla, och
// kraschar om du har en bug.
void increaseValue(int &theTime, int newTime){
    assert( newTime>= theTime );
    theTime = newTime;
}



//TODO implementera simulatorn!
void simulate(unsigned long long int antalKassor)
{

    std::ifstream infil;
    infil.open("../../Chapter08Heap/System/customers.txt");
    assert(infil);

    // Nedanstående que kommer att lagra Event-objekt
    // sorterade med avseende på m_timeToLeave.
    priority_queue<Event, vector<Event>, AWorseThanB> que;

    unsigned int time = 11*60*60;
    unsigned int ragnarLeavesAt = 0;
    unsigned int totalWaiting = 0;
    unsigned int totalTimeSpent = 0;

    Customer customer;

    while (infil >> customer)
    {
        //Finns inte lediga kassor
        if (!(que.size() < antalKassor))
        {
            time = que.top().m_timeToLeave;
            que.pop();
        }

        //Nu blir customer betjänad

        //Ingen väntetid, flytta fram tiden
        if (time < customer.m_arrival)
        {
            time = customer.m_arrival;
        }
        else
        {
            totalWaiting += time - customer.m_arrival;
        }

        totalTimeSpent += customer.m_timeSpent;

        unsigned int timeToLeave = time + customer.m_timeSpent;
        que.push(Event(customer.m_name, timeToLeave));

        if (customer.m_name == "Ragnar")
        {
            ragnarLeavesAt = timeToLeave;
        }
    }

    while (que.size() > 1) que.pop();
    int timeOfLastLeave = que.top().m_timeToLeave;

    int personhours = totalWaiting + totalTimeSpent + (timeOfLastLeave - 11*60*60)*antalKassor;

    cout << "---- antal Kassor " << antalKassor << " -------------------\n";
    cout << "Ragnar blir klar: " << timestring(ragnarLeavesAt) << endl;
    cout << "Total kotid: " << timestring(totalWaiting) << endl;
    cout << "Total persontid: " << timestring(personhours) << endl;
    cout << "-----------------------------------------" << endl << endl << endl;
}

void studentSystemSimulator()
{
    for (int kassor = 1; kassor <=20 ; kassor +=1)
        simulate(kassor);
}



/********************************************************************************************

  GE resultatet här!
  för antalKasor=1..20
Ragnar lämnar butiken med ... kassa vid ...
1 [2] 05:55:00
2 [1] 08:27:47
3 [1] 01:18:55
4 [0] 21:43:57
5 [0] 19:35:51
6 [0] 18:10:55
7 [0] 17:26:05
8 [0] 17:09:26
9 [0] 17:05:06
10 [0] 17:03:27
11 [0] 17:02:01
12 [0] 17:02:00
13 [0] 17:02:00
14 [0] 17:02:00
15 [0] 17:02:00
16 [0] 17:02:00
17 [0] 17:02:00
18 [0] 17:02:00
19 [0] 17:02:00
20 [0] 17:02:00



Total väntetid i butiken med ... kassor är ...
1 [1831] 07:56:41
2 [761] 16:00:02
3 [405] 02:43:09
4 [226] 19:17:35
5 [120] 00:53:37
6 [49] 14:48:22
7 [15] 22:55:24
8 [3] 06:54:18
9 [0] 14:15:29
10 [0] 05:26:49
11 [0] 02:22:27
12 [0] 00:55:44
13 [0] 00:21:51
14 [0] 00:07:23
15 [0] 00:01:07
16 [0] 00:00:18
17 [0] 00:00:01
18 [0] 00:00:00
19 [0] 00:00:00
20 [0] 00:00:00

Vi borde ha 10 kassor öppna!
Då är den totala persontiden som minst, det vill säga så lågt som:
[5] 22:56:34


********************************************************************************************/
