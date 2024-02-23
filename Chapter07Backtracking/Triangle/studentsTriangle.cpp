#include "studentsTriangle.h"

#include <deque>
#include <iostream>

#include <QDebug>

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

    //Make sure we don't calculate the same way twice
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

bool hasPath(State state, Position finalPos)
{
    if (state.integerFromState() == 1 << (finalPos)) return true;

    for (Move move : state.legalMoves())
    {
        if (hasPath(state.nextState(move), finalPos))
        {
            return true;
        }
    }

    return false;
}

/*
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
        //Trackback
        if (state.numberOfBricks() == 1 && state.positionOfSingleBrick() == posOfFinal)
        {
            State _state = state;

            for (int i = 0; i < numberOfMoves; i++)
            {
                path.push_back(previous[_state.integerFromState()]);
                _state = previouss[_state.integerFromState()];
            }

            //Reverse
            vector<Move> temp = path;
            int size = temp.size();

            for (int i = 0; i < size; i++)
            {
                path[size - i - 1] = temp[i];
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
}*/
/*
std::vector<Move> movesInPathToFinal(State state, Position posOfFinal)
{
    std::vector<Move> path;

    std::vector<State> stateTODO {state};
    std::vector<int> previousStates;

    Move previous[numberOfPossibleStates];

    const int numberOfMoves = state.numberOfBricks() - 1;
    while (stateTODO.size() > 0)
    {
        State state = stateTODO.back();
        stateTODO.pop_back();
        //Trackback
        if (state.numberOfBricks() == 1 && state.positionOfSingleBrick() == posOfFinal)
        {
            State _state = state;

            for (int i = 0; i < numberOfMoves; i++)
            {
                Move preMove = previous[_state.integerFromState()];
                path.push_back(preMove);
                _state = _state.prevState(preMove);
            }

            //Reverse
            vector<Move> temp = path;
            int size = temp.size();

            for (int i = 0; i < size; i++)
            {
                path[size - i - 1] = temp[i];
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
            }
        }
    }

    return path;
}*/

bool hasSeen(State state, vector<State> seenStates)
{
    for (State s : seenStates)
        if (state.integerFromState() == s.integerFromState())
            return true;
    return false;
}
/*
std::vector<Move> movesInPathToFinal(State state, Position posOfFinal)
{
    vector<Move> moves;
    int startSize = 0;

    while (true)
    {
        vector<Move> legalMoves = state.legalMoves();
        for (Move move : legalMoves)
        {
            State nextState = state.nextState(move);

            if(legalMoves.size() == 1 || hasPath(nextState, posOfFinal))
            {
                moves.push_back(move);
                state = nextState;
                //Önskar det fanns en Continue som tog på while loopen.
                break;
            }
        }

        //Om startsize == moves.size har vi inte hittat ett till drag
        if (startSize == moves.size()) break;
        else startSize = moves.size();
    }

    return moves;
}*/

std::vector<Move> movesInPathToFinal_(State state, Position posOfFinal)
{
    vector<Move> moves;

    for (Move move : state.legalMoves())
    {
        State nextState = state.nextState(move);

        if (hasPath(nextState, posOfFinal))
        {
            moves = movesInPathToFinal_(nextState, posOfFinal);
            moves.push_back(move);
            break;
        }
    }

    return moves;
}

std::vector<Move> movesInPathToFinal(State state, Position posOfFinal)
{
    vector<Move> moves = movesInPathToFinal_(state, posOfFinal);

    //reverse
    vector<Move> temp = moves;
    int size = temp.size();

    for (int i = 0; i < size; i++)
    {
        moves[size - i - 1] = temp[i];
    }

    return moves;


}

