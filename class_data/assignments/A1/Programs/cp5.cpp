// program for checking leap year or not leap year
#include<iostream>
using namespace std;
int main() {
	int year; // Variable Declaration
	cout<<"Enter a Year:	"; // for GUI
	cin>>year; // to take input from user
	
	if(year % 4 == 0) { // leap year condition
		cout <<"This is a leap Year"<<endl;
	}else {
		cout<<"This is Not a leap Year"<<endl;
	}
	return 0;
}
