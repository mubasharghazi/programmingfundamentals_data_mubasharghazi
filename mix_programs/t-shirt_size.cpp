//  Write a C++ program that takes a character as input ('S', 'M', or 'L') representing T-shirt 
// size and prints a message based on the size using a switch statement.

#include <iostream>
using namespace std;
int main() {
    char size;

    // Input T-shirt size
    cout<<"Enter T-shirt size (S, M, or L): "<<endl;
    cin>> size;
    // Switch statement to print message based on size
    switch (size) {
        case 'S':
        case 's':
            cout << "Small size selected. It fits snugly.\n";
            break;
        case 'M':
        case 'm':
            cout << "Medium size selected. It's a comfortable fit.\n";
            break;
        case 'L':
        case 'l':
            cout << "Large size selected. It provides a loose fit.\n";
            break;
        default:
            cout << "Invalid size. Please enter 'S', 'M', or 'L'.\n";
    }
    return 0;
}
