// Program for check if a number is divisible by 2 and 3.
#include<iostream>
using namespace std;
int main() {
	int number;
	cout<<"Enter a Number:	";
	cin>>number;
	
	if(number % 2 ==0 && number % 3 ==0) {
		cout<<"Divisible";
	}else {
		cout<<"Not Divisible";
	}
	
	return 0;
}
