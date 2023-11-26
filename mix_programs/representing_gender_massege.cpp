// Write a C++ program that takes a character as input ('M' or 'F') representing gender and 
// prints a message based on the gender using a switch statement.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char gender; // Declare a Variable for Character input
    // For input
    cout<<"Enter a Character(M or F ): "<<endl;
    cin>>gender;
// Switch Statement

    switch (gender){
        case 'M':
        case 'm':
            cout<<"You are Male."<<endl;
        break;
        case 'F':
        case 'f':
            cout<<"You are Female."<<endl;
        break;
        default:
            cout<<"Error: Invalid Input."<<endl;
    }
    return 0;
}