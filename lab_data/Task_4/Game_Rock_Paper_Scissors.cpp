// Program for Rock Paper Scissor against computer
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Array to store choices
    string choices[3] = {"Rock", "Paper", "Scissors"};

    // Computer's choice (0, 1, or 2)
    int computerChoice = rand() % 3;

    // User's choice
    int userChoice;

    // Get user's choice
    cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): "<<endl;
    cin >> userChoice;

    // Check for invalid input
    if (userChoice < 0 || userChoice > 2) {
        cout << "Invalid choice. Please enter 0, 1, or 2." << endl;
        return 1; // Exit the program with an error code
    }

    // Display choices
    cout << "You chose: " << choices[userChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0; // Indicate the program ran successfully
}
