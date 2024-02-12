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

<<<<<<< HEAD

//Kanske effektivast? :(
=======
>>>>>>> cc621cbde78dd3ef0234d0d5a4359335b0e2ec97
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

<<<<<<< HEAD
=======
        //Trackback
>>>>>>> cc621cbde78dd3ef0234d0d5a4359335b0e2ec97
        if (state.numberOfBricks() == 1 && state.positionOfSingleBrick() == posOfFinal)
        {
            State _state = state;

            for (int i = 0; i < numberOfMoves; i++)
            {
                path.push_back(previous[_state.integerFromState()]);
                _state = previouss[_state.integerFromState()];
            }

<<<<<<< HEAD
            //reverse

            vector<Move> temp = path;

            const int size = temp.size();

            for (int i = 0; i < size; i++)
            {
                path[size-1-i] = temp[i];
=======
            //Reverse

            vector<Move> temp = path;
            int size = temp.size();

            for (int i = 0; i < size; i++)
            {
                path[size - i - 1] = temp[i];
>>>>>>> cc621cbde78dd3ef0234d0d5a4359335b0e2ec97
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
<<<<<<< HEAD
}


//SMART
=======
<<<<<<< HEAD
=======
}*/

bool hasSeen(State state, vector<State> seenStates)
{
    for (State s : seenStates)
        if (state == s)
            return true;
    return false;
}

std::vector<Move> movesInPathToFinal(State state, Position posOfFinal)
{
    //One path to every possible posOfFinal
    vector<Move> path;
    vector<State> stateTODO {state};
    vector<State> statesSeen {state};

    State startState = state;
    const int antalDrag = state.numberOfBricks() - 1;

    Move moves[antalDrag];
    State states[antalDrag + 1];
    states[0] = state;

    for (int i = 0; i < antalDrag; i++)
    {
        State _state = states[i];
        vector<Move> moves = _state.legalMoves();

        for (Move move : moves)
        {
            if (!hasSeen(_state.nextState(move), statesSeen))
            {

            }
        }

        moves[i] = _state.legalMoves()[0]
    }


    return path;
>>>>>>> b48b756c6650f3e72829922d2c4f6a2bcb8a0bc0
}


>>>>>>> cc621cbde78dd3ef0234d0d5a4359335b0e2ec97
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
