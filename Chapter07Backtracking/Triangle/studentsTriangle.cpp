#include "studentsTriangle.h"

#include <deque>
#include <iostream>

const int numberOfPossibleStates = 32768;

using namespace std;

bool contains(int input, vector<int> &states)
{
    for (int state : states)
    {
        if (input == state)
            return true;
    }
    return false;
}

std::set<Position> setOfPossibleFinalPositions(State state)
{
    std::set<Position> posOfFinals;
    std::deque<State> statesTodo {state};

    std::vector<int> previousStates;

    while (statesTodo.size() > 0)
    {
        State state = statesTodo.front();
        statesTodo.pop_front();

        if (state.numberOfBricks() == 1)
        {
            posOfFinals.insert(state.positionOfSingleBrick());
        }
        else
        {
            for (Move move : state.legalMoves())
            {
                State nextState = state.nextState(move);

                if (!contains(nextState.integerFromState(), previousStates))
                {
                    previousStates.push_back(nextState.integerFromState());
                    statesTodo.push_back(nextState);
                }

            }
        }
    }
    return posOfFinals;
}


//Kanske effektivast? :(
std::vector<Move> movesInPathToFinal(State state, Position posOfFinal)
{
    std::vector<Move> path;

    std::vector<State> stateTODO {state};
    std::vector<int> previousStates;

    Move previous[numberOfPossibleStates];
    State previouss[numberOfPossibleStates];

    const int numberOfMoves = state.numberOfBricks() - 1;
    while (stateTODO.size() > 0)
    {
        State state = stateTODO.back();
        stateTODO.pop_back();

        if (state.numberOfBricks() == 1 && state.positionOfSingleBrick() == posOfFinal)
        {
            State _state = state;

            for (int i = 0; i < numberOfMoves; i++)
            {
                path.push_back(previous[_state.integerFromState()]);
                _state = previouss[_state.integerFromState()];
            }

            //reverse

            vector<Move> temp = path;

            const int size = temp.size();

            for (int i = 0; i < size; i++)
            {
                path[size-1-i] = temp[i];
            }

            return path;
        }

        for (Move move : state.legalMoves())
        {
            State nextState = state.nextState(move);

            if (!contains(nextState.integerFromState(), previousStates))
            {
                previousStates.push_back(nextState.integerFromState());
                stateTODO.push_back(nextState);

                previous[nextState.integerFromState()] = move;
                previouss[nextState.integerFromState()] = state;
            }
        }
    }

    return path;
}


//SMART
/*std::vector<Move> movesInPathToFinal(State state, Position posOfFinal)
{
    vector<Move> moves;

    int startSize = moves.size();


    while (true)
    {
        vector<Move> legalMoves = state.legalMoves();
        for (Move move : legalMoves)
        {
            State nextState = state.nextState(move);

            if(legalMoves.size() == 1 || setOfPossibleFinalPositions(nextState).count(posOfFinal) > 0)
            {
                moves.push_back(move);
                state = nextState;
                //Önskar det fanns en Continue som tog på while loopen.
                break;
            }
        }

        if (startSize == moves.size()) break;
        else startSize = moves.size();
    }

    return moves;
}*/

//GAMMAL

/*
std::vector<Move> movesInPathToFinal(State _state, Position posOfFinal)
{

    std::vector<Move> path;
    std::deque<Move> _path;
    std::deque<State> states {_state};

    std::vector<Move> prevState(numberOfPossibleStates);
    std::vector<State> prevStateSTATE(numberOfPossibleStates);

    while (states.size() > 0)
    {
        State state = states.front();
        states.pop_front();



        if (state.numberOfBricks() == 1 && state.positionOfSingleBrick() == posOfFinal)
        {
            State temp = state;

            while (temp.integerFromState() != _state.integerFromState())
            {
                _path.push_front(prevState[temp.integerFromState()]);
                temp = prevStateSTATE[temp.integerFromState()];
            }

            break;
        }

        else
        {
            std::vector<Move> moves = state.legalMoves();
            for (Move move : moves)
            {
                State nextState = state.nextState(move);
                states.push_back(nextState);

                prevState[nextState.integerFromState()] = move;
                prevStateSTATE[nextState.integerFromState()] = state;
            }
        }
    }

    for (Move move: _path)
        path.push_back(move);


    return path;
}
*/
