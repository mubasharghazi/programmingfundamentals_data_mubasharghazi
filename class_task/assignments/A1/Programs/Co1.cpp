// Program for Check even or odd number

#include <iostream>
using namespace std;
int main() {
	int number; // Declaration
	cout<<"Enter a Number:	"; // for user interaction
	cin>>number; // for getting input from user
	if(number % 2 == 0) { // if number is fully divisible then its even, otherwise odd
		cout<<"You Entered An Even Number.	"<< number;
	}
	else
		cout<<"You Entered An Odd Number.";
	
	return 0;
}
