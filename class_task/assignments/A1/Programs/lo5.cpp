// program for check number is odd and not divisible by 7
#include<iostream>
using namespace std;
int main() {
	int number;
	cout<<"Enter a Number:	";
	cin>>number;
	
	if( number % 2 != 0 && number % 7 != 0) {
		cout<<"You Entered an Odd Number & it is Not Divisible by 7";
	}else{
		cout<<"It is not odd and not divisible by 7";
	}
	return 0;
}
