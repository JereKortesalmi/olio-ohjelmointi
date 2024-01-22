#include "game.h"

game::game()
{
    cout << "Luokan konstruktori." <<endl;
    maxNumber=0;
}

game::game(int m)
{
    maxNumber = m;
    cout << "Luokan konstruktori. Maksimi arvo on: " << m << endl;
}

game::~game()
{
    cout << "Luokan destruktori Peli loppui" << endl;
}

void game::play()
{
    srand(time(NULL));
    int randomNumber = rand() % maxNumber+1;

 do {
        cout << "arvaa numero 1- " << maxNumber << endl;
        cin >> playerGuess;


        if(randomNumber < playerGuess){
            cout << "pienempi luku" << endl;
            cout << "arvaa uudestaan" << endl;
            numOfGuesses++;
        }
        else if(randomNumber > playerGuess){
            cout << "isompi luku" << endl;
            cout << "arvaa uudestaan" << endl;
            numOfGuesses++;
        }

}
 while(playerGuess != randomNumber);
{
        printGameResult();
}


}

void game::printGameResult()
{

cout << "Oikein voitit pelin! Oikea vastaus on:  " << playerGuess << " arvaukset: " <<numOfGuesses << endl;


}

