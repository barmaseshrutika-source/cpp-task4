/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <cstdlib>   
#include <ctime>     

using namespace std;

int main() {
    int randomNumber, userGuess;
    int attempts = 0;

    srand(time(0));

    randomNumber = rand() % 100 + 1;

    cout << "===== Number Guessing Game =====\n";
    cout << "Guess a number between 1 and 100\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if(userGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        }
        else if(userGuess < randomNumber) {
            cout << "Too low! Try again.\n";
        }
        else {
            cout << "Congratulations! You guessed the correct number!\n";
            cout << "Total attempts: " << attempts << endl;
        }

    } while(userGuess != randomNumber);

    return 0;
}
