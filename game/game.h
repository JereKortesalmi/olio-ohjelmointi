#ifndef GAME_H
#define GAME_H
#include <ctime>
#include <iostream>

using namespace std;

class game
{
public:
    game();
    game(int m);
    ~game();
    void play();

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses =1;
    void printGameResult();
};

#endif // GAME_H
