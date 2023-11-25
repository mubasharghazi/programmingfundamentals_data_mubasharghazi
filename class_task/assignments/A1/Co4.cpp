// Program for Checking Number is Positive or Negative or Zero?
#include <iostream>
using namespace std;
int main() {
	int number; // Declaration
	cout<<"Enter a Number:	";
	cin>>number;
	
	if(number > 0) {
		cout<<"You Entered a Positive Number";
	}
	else if (number<0) {
		cout<<"You Enter a Negative Number";
	}
	else{
		cout<<"You Entered Zero";
	}
	return 0;	
}
