// Program for Simple Calculation using If else statement
#include<iostream>
using namespace std;
int main() {
	char op; // character type variable 
	cout<<"Calculator"<<endl; // for printing
	cout<<"Enter An Operator(+,-,*,/):	"; // For Show options as +-*/
	cin>>op; // For taking Input from user 
	double num1,num2; // Interger type variable declarion
	cout<<"Enter First Number:	\n"; // For print somrthing on Screen
	cin>>num1; // for input
	cout<<"Enter Second Number:	\n"; // for User Interaction
	cin>>num2; // for taking input from user
	// Conditional programming
	if(op == '+') { // case 1
		cout<<"Result is:  "<< num1 + num2 <<endl;
	} else if(op == '-') { // case 2
		cout<<"Result is:  "<< num1 - num2 <<endl;
	} else if (op == '*') { // case 3
		cout<<"Result is: "<< num1 * num2 <<endl;
	} else if(op == '/') { // case 4
		if(num1 != 0 && num2 != 0){ // sub case, if user enter zero
			cout<<"Result is:  " << num1 / num2 <<endl;
		} else{
			cout<<"Error: It is not divisible.\n (You Entered Zero)";
		}
	} else{ // case 5 if user enter wrong operator
		cout<<"Invalid Operator"<<endl;
	}
	return 0;
}
