#include "student4thoughtreading.h"
#include "ragnarstest4.h"

#include <iostream>
using namespace std;




// ################ MAGI! Förklara hur tankeläsningen fungerar! #################

void tankPaEttTal(){
    int x = 108;
    cout <<  "Denna funktion tanker pa ett hemligt tal" << endl;

}

void tankelasning(){
    int  hemligheten;
    cout <<  "Denna funktion tror att den andra funktionens hemlighet ar " << hemligheten << endl;
}

void experimentMedTankeoverforing(){
    cout << "Experiment med tankeoverforing!\n";
    cout << "(studera utskrifterna sa att du kan forklara dem i kommentaren)\n\n";
    tankPaEttTal();
    tankelasning();


    /* TODO
       Förklaring:

       Ett minne är aldrig tomt, det innehåller alltid något. Det kan innehålla bara 0.

        Om ett minne inte används så kan man lätt tänka att det "Försvinner".
        Men oftast ligger värdet kvar bara att minnesadressen inte längre används.

        När tankPåEttTal är klar försvinner en i voiden och minnesplatsen blir ledig
        int hemlighet får samma adressrad som int x, men då den inte får ett initaltvärde så har den det värde som ligger på den adressraden.
        Och, i detta fall är det ju givetvis talet 108 eftersom det aldrig raderas,
        utan bara att minnesplatsen blev ledig och nästa variablen fick samma minnesplats som nu du har kvar samma värde då initial värde saknas.

        Detta är ju då ett skräpvärde, som ligger och skräpa från en gammal operation.
     */
}




void mainFunctionInStudent4(){

    cout << "\n\n\n################ testingCode4 #################\n\n";

    experimentMedTankeoverforing();

    ragnarsTest4();
}

