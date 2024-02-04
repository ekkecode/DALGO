#include "studentsTriangle.h"

#include <deque>
#include <iostream>

const int numberOfPossibleStates = 32768;

using namespace std;

std::set<Position> setOfPossibleFinalPositions(State state)
{
    std::set<Position> posOfFinals;
    std::deque<State> states {state};

    while (states.size() > 0)
    {
        State state = states.front();
        states.pop_front();

        if (state.numberOfBricks() == 1)
        {
            posOfFinals.insert(state.positionOfSingleBrick());
        }
        else
        {
            std::vector<Move> moves = state.legalMoves();
            for (Move move : moves)
            {
                states.push_back(state.nextState(move));
            }
        }
    }
    return posOfFinals;
}

std::vector<Move> movesInPathToFinal(State state, Position posOfFinal)
{
    vector<Move> moves;

    int startSize = moves.size();

    while (true)
    {
        for (Move move : state.legalMoves())
        {
            State nextState = state.nextState(move);

            if(setOfPossibleFinalPositions(nextState).count(posOfFinal) > 0)
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
}


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
