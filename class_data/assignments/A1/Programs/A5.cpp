// Program to find average of three user inputted numbers
#include <iostream>
using namespace std;
int main() {
	double num1,num2,num3,average; // Variable Declaration
	cout<<"Enter First Number:	"; // For User interaction
	cin>>num1; // getting input from user
	cout<<"Enter Second Number:	";
	cin>>num2;
	cout<<"Enter Third Number:	";
	cin>>num3;
	average = (num1+num2+num3) /3 ; // calculation for finding average of three numbers
	cout<<"Average of Numbers =	"<<average;
	return 0;
	}
