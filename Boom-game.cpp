#include <iostream>
#include <string>
#include <algorithm> // for transform
using namespace std;

bool isBoomNumber(int number) {
    return number % 5 == 0;
}

int main() {
    int userInput;
    string userMove;

    cout << "Welcome to the Boom Game!\n";

    while (true) {
        cout << "\nEnter a number to start: ";
        while (!(cin >> userInput)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Enter a number to start: ";
        }

        while (true) {
            int computerResponse = userInput + 1;

            if (isBoomNumber(computerResponse)) {
                cout << "Computer: Boom" << endl;
            } else {
                cout << "Computer: " << computerResponse << endl;
            }

            cout << "Your turn: ";
            cin >> userMove;

            // Convert input to lowercase for case-insensitive comparison
            transform(userMove.begin(), userMove.end(), userMove.begin(), ::tolower);

            if (userMove == "boom") {
                userInput = computerResponse + 1;
                continue;
            }

            try {
                userInput = stoi(userMove);
            } catch (const invalid_argument&) {
                cout << "Invalid input. Please enter a number or 'Boom'.\n";
                continue;
            }

            if (isBoomNumber(userInput)) {
                cout << "Game Over! You lost by entering a forbidden number.\n";
                break;
            }

            if (userInput != computerResponse + 1) {
                cout << "Game Over! You lost by entering the wrong number.\n";
                break;
            }
        }

        char playAgain;
        cout << "\nGame over! Thanks for playing 'Boom'.\n";
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        if (playAgain != 'y' && playAgain != 'Y') {
            cout << "Goodbye!\n";
            break;
        }
    }

    return 0;
}
