#include "game.h"

Game::Game(int mn)
{
    maxNumber = mn;
    cout << "Game konstruktori "
        << "maxNumber on "
        << maxNumber
         << endl;
}

Game::~Game()
{
    cout << "Game destruktori"
         << endl;
}

void Game::play()
{
    numOfGuesses = 7;
    printGameResult();

    cout << "Game play"
         << endl;

    int satunnaisluku = 0;
    int arvaus = 0;
    int numOfGuesses = 0;

    cout << "maxNumber="
         << maxNumber
         << endl;

    srand(time(NULL));
    satunnaisluku = rand() % maxNumber;

    while (true) {

        cout << "Anna luku? "
             << endl;
        cin >> arvaus;

        numOfGuesses++;

        cout << "Number of guesses: " << numOfGuesses << endl;

        if (arvaus == satunnaisluku) {
            cout << "Oikein!"
                 << endl;
            break;
        }

        if (arvaus < satunnaisluku) {
            cout << ("Luku on suurempi")
            << endl;
        }

        if (arvaus > satunnaisluku) {
            cout << ("Luku on pienempi")
            << endl;
        }


    }


    return;
}

void Game::printGameResult()
{
    cout << "Game printGameResult"
        << numOfGuesses
         << endl;
}

