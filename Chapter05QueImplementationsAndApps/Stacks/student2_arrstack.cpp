#include "student2_arrstack.h"
#include <assert.h>
#include <iostream>

const char* nameOfStudentAStack(){
    return "Emil Kronholm";
}



AStack::AStack()
{
    this->m_pArr = new float[10];
    this->m_size = 0;
    this->m_capacity = 10;

}


AStack::~AStack()
{
    delete [] m_pArr;
}

void AStack::pushBack(float value)
{
    //If capacity is 10, then size has to be lower than 9 to leave room. (0, 1, 2...9)
    assert(this->m_size < this->m_capacity - 1);

    //Assings value to the array
    *(this->m_pArr + this->m_size + 1) = value;

    this->m_size += 1;

    //New array
    if (this->m_size == this->m_capacity - 1)
    {
        //Creates new array (double size) and copies all values
        float* temp = new float[2 * m_capacity];
        for (int i = 0; i < m_capacity; i++)
        {
            temp[i] = this->m_pArr[i];
        }

        delete [] m_pArr;

        //Updates the object
        this->m_capacity *= 2;
        this->m_pArr = temp;
    }
}


float &AStack::back()
{
    return m_pArr[size()];
}

void AStack::popBack()
{
    this->m_size -= 1;
}

int AStack::size() const
{
    return this->m_size;
}

void studentTest2()
{
    AStack stack;

    for (int i = 0; i < 100; i++)
    {
        stack.pushBack(i);

        if (i%10 == 0)
        {
            std::cout << stack.back() << std::endl;
        }
    }

    std::cout << "size: " << stack.size() << std::endl;
    stack.popBack();
    stack.popBack();
    stack.popBack();
    stack.popBack();
    stack.popBack();
    stack.popBack();
    stack.popBack();
    stack.popBack();
    std::cout << "size " << stack.size() << std::endl << "Value " << stack.back();

}

/******** kommentar som efterfrågades i "öka istället linjärt"

  blev det någon skillnad när du ökade arraystorleken med 10 istället för med dubbleing?

Ja, faktiskt! Den blev för långsam när jag försökte pusha 1 miljon element i stacken.

pushBack har tidskomplexiteten O(1) när den lägger till ett element, för det enda som händer är:
size ökar med 1 och ett nytt värde läggs till i arrayen.

Däremot, när arrayen förlängs så behöver alla element kopieras. Just då behöver alla element loopas igenom och kopieras,
dvs worst case O(n).

Men som tur var sker det rätt så sällan när vi dubblerar arraylängden, och därför så klassas algoritmen som O(1).

Men ökar vi med 10 varje gång sker worst case var tioende gång pushBack anropas. Fortfarende ingen katastrof egentlingen,
skulle ändå säga att algoritmen har O(1). Men den blir ändå markant långsammare än när vi dubblar storleken.

Å andra sidan så blir tar det ju mindre minne då risken att man får oanvända floats allokerade.

 ***********************************************************************/
