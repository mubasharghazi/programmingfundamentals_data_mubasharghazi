// Program for determine which number is larger
#include <iostream>
using namespace std;
int main() {
	int num1,num2; // Declaration
	cout<<"Enter First Number:	"; // for user interaction
	cin>>num1; // getting input from user
	cout<<"Enter Second Number:	";
	cin>>num2;
	
	// Conditional programming
	
	if(num1>num2){
		cout<<"Number1 is Greater than Number2";
	}
	else{
		cout<<"Number2 is Greater than Number1";
	}
	
	return 0;
	
}
