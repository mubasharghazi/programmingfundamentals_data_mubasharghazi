// Program for checks number is in between 10-20
#include<iostream>
using namespace std;
int main() {
	int number;
	cout<<"Enter a Number:	";
	cin>>number;
	
	if ( number >= 10 && number <= 20) {
		cout<<"In Range";
	}else {
		cout<<"Out Range";	
	}
	
	return 0;
}
