#include "student2reference.h"
#include "ragnarstest2.h"

#include <iostream>
using namespace std;


const char* nameOfTheStudent2()
{
    return "Emil Kronholm";  // Byt ut denna sträng mot ditt eget namn!
}

// ################ experiment med värde- pekar- och referensanrop #################

struct Exempelstruct{
    int m_intValue1;
    int m_intValue2;
    float m_array[1000];
    int m_intValue3;

};


// Skriver ut structobjektets adress, samt adresserna till alla
// medlemmar i objektet.
void skrivStruktensAdresser(const Exempelstruct &s){
    cout << "&s " << "\t\t== " << &s << endl;
    cout << "&s.m_intValue1 " << "\t== "  << &s.m_intValue1 << endl;
    cout << "&s.m_intValue2 " << "\t== "  << &s.m_intValue2 << endl;
    cout << "s.m_array "      << "\t== "   << s.m_array << endl;
    cout << "&s.m_intValue3 " << "\t== " << &s.m_intValue3 << endl;
}




// call by value, theStruct kommer att kopieras (även arrayen)
void skrivAdresser1(Exempelstruct theStruct){
    cout << "skrivAdresser1" << endl;
    cout << "--------------" << endl;
    skrivStruktensAdresser( theStruct );
    cout << endl << endl;
}


// call by reference, theStruct är identisk med anroparens s.
void skrivAdresser2(const Exempelstruct &theStruct){
    cout << "skrivAdresser2" << endl;
    cout << "--------------" << endl;
    skrivStruktensAdresser( theStruct );
    cout << endl << endl;
}

// call by pointer. Nu är (*pThestruct) identisk med anroparens s.
void skrivAdresser3(const Exempelstruct *pTheStruct){
    cout << "skrivAdresser3" << endl;
    cout << "--------------" << endl;
    skrivStruktensAdresser( *pTheStruct );
    cout << endl << endl;
}


// Experimentkoden är färdigskriven med betrakta utskrifterna!!
void experimentMedParameteroverforing(){

    cout << "Experiment med parameteröverföring!\n";
    cout << "(studera utskrifterna så att du kan förklara dem i nedanstående kommentar)" << endl;

    Exempelstruct mittObjekt;

    skrivAdresser1(mittObjekt);
    skrivAdresser2(mittObjekt);
    skrivAdresser3(&mittObjekt);

    /* TODO!!
       Skriv din förklaring här:
       (förklara allt som efterfrågas i kompendiet!)

    1. skrivAdresser2 använder referensrop (&). Det gör att objektet inte dupliceras utan skickar in samma objekt,
    praktiskt sätt skickar in minnesadressen och använder exakt samma objekt. Det samma görs i skirvadresser3. Där skickar man
    in minnesadressen (& (nu skickar man in en adressen i anropet som paramteter)). Alltså, i både 2 och 3 används objektet skapat
    på linje 69, och om samma objekt används så kommer såklart medlemsvariabelna vara exakt samma och ha exakt samma plats i minnet.

   ->>>> 2. Parameterar som dupliceras läggs i en speciell avsett plats i minnet. Funktioner och deras lokala variablar sparas här helt
    enkelt på en adress som är lägre.

    eller

    När kompilatorn kompilerar så läser den uppifrån och ner. Så 1an är den första den läser in och därmed den första får minne allokerat,
    därav den "lägsta" adressraden.

    3. Ja! intValue1 tar upp plats 0x6a015fe6c0, 0x6a015fe6c1, 0x6a015fe6c2, 0x6a015fe6c3. Dvs 4
    Sedan därefter kommer intValue2 och börjar på 0x6a015fe6c4, slutar på 0x6a015fe6c8 (4 byte)

    Alltså en INT är 4 byte.

    Arrayfloaten innehåller 1000 element, dvs tar lika stor plats som 1000 float-variablar.
    Arrayen tar upp minnesadresserna 0x6a015fe6c8 till 0x6a015ff668.
    0x6a015ff668 - 0x6a015fe6c8 = 1000 - 60 = fa0
    fa0(16) = 15*16^2 + 10 * 16 + 0 * 1 = 4000 (miniräknare)

    4000/1000 = 4

    Alltså en float är 4 byte.

    Svar float och int är lika stora.



    */
}




void mainFunctionInStudent2(){

    cout << "\n\n\n################ testingCode2 #################\n\n";

    experimentMedParameteroverforing();

    ragnarsTest2();
}
