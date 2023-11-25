// Program for checking NUmber is Positive or Nagetive or Zero
#include<iostream>
using namespace std;
int main() {
	int number;
	cout<<"Enter a Number:	";
	cin>>number;
	
	if (number > 0) {
		cout<<"Number is Positive";
	}else if(number < 0) {
		cout<<"Number is Negative";
	}else{
		cout<<"Number is Zero";	
	}	
	return 0;
}
