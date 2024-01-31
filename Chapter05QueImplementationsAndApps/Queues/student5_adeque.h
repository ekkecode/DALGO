#ifndef STUDENTSADEQUE_H
#define STUDENTSADEQUE_H


const char* nameOfStudentADeque();


class ADeque
{
    // Till studenten: Man får ändra på denna privata del av klassen om man vill,
    //                 och eftersom den nästan är tom måste du faktiskt göra det!
    float *m_pArr;
    int m_capacity;
    int m_size;

    int m_IndexFront;

    int priorIndex(const int index);
    int nextIndex(const int index);
    int getIndexOfBack();
    int getRelativeIndex(const int index);

    void expandArray();

public:
    // Till studenten: implementera dessa metoder i cpp-filen
    // Alla metoder ha (genomsnittlig) komplexitet O(1)

    ADeque();
    ~ADeque();

    void pushBack(float value);
    void pushFront(float value);

    void popBack();
    void popFront();

    float &back();
    float &front();
    int  size() const;

    void testing();
};

#endif // STUDENTSADEQUE_H
