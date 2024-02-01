#include "studentscalculator.h"
#include <iostream>
#include <vector>

#include <math.h>
#include <assert.h>

using namespace std;


const char* nameOfStudent6(){
    return "Emil Kronholm";
}


/********************************************************************
ANROP:    float valueFromInfixoperation(x, op,  y);
VERSION:  071114 RAG
UPPGIFT:  returnerar x op y;
**********************************************************************/
float valueFromInfixexpression( float x, char op,  float y)
{

  if (op=='+') return x+y;
  if (op=='-') return x-y;
  if (op=='*') return x*y;
  if (op=='/') return x/y;
  if (op=='^') return float( pow(x,y) );

  assert( false );
  return float();
}//valueFromInfixoperation


int priorityOfOp(char op){
    if (op=='+') return 1;
    if (op=='-') return 1;
    if (op=='*') return 2;
    if (op=='/') return 2;
    if (op=='^') return 3;
    return -1;
}

bool isLegalOp(char op){
    return priorityOfOp(op)>=0;
}


/****************************************************************
 * Takes the first and second operands, and operates them
 * according to the operator at back() of stackOfOperators
 * and pops all of them when finished.
 *****************************************************************/

void popAndOperate(std::vector<float> &stackOfValues, std::vector<char> &stackOfOperators)
{
    float value1 = stackOfValues.back();
    stackOfValues.pop_back();

    float value2 = stackOfValues.back();
    stackOfValues.pop_back();

    char operatorr = stackOfOperators.back();
    stackOfOperators.pop_back();

    stackOfValues.push_back(valueFromInfixexpression(value2, operatorr, value1));
}

// Denna algoritm skall implementeras av studenten
bool applyParsingAlgorithm(const std::vector<Token> &tokens, std::vector<float> &stackOfValues, std::vector<char> &stackOfOperators)
{
    bool lastTokenWasValue = false;

    int numOfFrontParanthesis = 0;
    int numOfBackParanthesis = 0;

    for (Token token : tokens)
    {
        //Pushar alla värden, samt kontrollerar att 2 värden aldrig kan pushas i rad
        if (token.m_isValueToken)
        {
            if (lastTokenWasValue) return false;
            stackOfValues.push_back(token.m_value);
            lastTokenWasValue = true;
            continue;
        }
        else
        {
            lastTokenWasValue = false;
        }

        //PARANTESER
        if (token.m_opSymbol == '(' || token.m_opSymbol == ')')
        {
            if (token.m_opSymbol == '(')
            {
                stackOfOperators.push_back('(');
                numOfFrontParanthesis++;
            }

            else if (token.m_opSymbol == ')')
            {
                numOfBackParanthesis++;

                if (stackOfOperators.size() > 0)
                {
                    while (stackOfOperators.back() != '(')
                    {
                        if (stackOfValues.size() < 2) return false;

                        popAndOperate(stackOfValues, stackOfOperators);
                    }

                    //Removes the '('
                    stackOfOperators.pop_back();
                }
            }

            continue;
        }

        //Calculating 0 or many times.
        int tokenPrio = priorityOfOp(token.m_opSymbol);

        //If tokenPrio is more or equal the back() then we should calculate
        //If back() is '=' then we should calculate
        while (true)
        {
            //Viktigt med ordning!
            if (stackOfOperators.size() <= 0) break;
            if (!isLegalOp(stackOfOperators.back())) break;
            //Om varken back() är '=' eller om back() har minst högre prio, ska vi sluta räkna
            if (stackOfOperators.back() != '=' && tokenPrio > priorityOfOp(stackOfOperators.back())) break;
            if (stackOfValues.size() < 2) break;

            popAndOperate(stackOfValues, stackOfOperators);
        }

        //When done with all calcultating, the algorithm should push the new operator
        stackOfOperators.push_back(token.m_opSymbol);
    }

    if (stackOfOperators.size() > 0 && stackOfOperators.back() == '=')
        stackOfOperators.pop_back();

    //One last check!
    return stackOfValues.size() == 1 && stackOfOperators.size() == 0 && numOfBackParanthesis == numOfFrontParanthesis;
}







