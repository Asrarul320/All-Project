#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGame(int lower, int upper) {
    srand(time(0)); // Seed random number generator
    int secretNumber = lower + rand() % (upper - lower + 1);
    int guess, attempts = 0;

    cout << "\nGuess the number between " << lower << " and " << upper << "!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);
}

int main() {
    int lower = 1, upper = 100;
    char choice;

    cout << "Welcome to the Number Guessing Game!" << endl;
    do {
        playGame(lower, upper);
        cout << "\nDo you want to play again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Thanks for playing!" << endl;
    return 0;
}