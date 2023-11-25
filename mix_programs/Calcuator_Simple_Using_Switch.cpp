// Program for simple calculation using switch statement
#include<iostream>
using namespace std;
int main() {
	// Variables Declaration
	double num1,result,num2;
	// For GUI and Get INput from user
	cout<<"Enter Your First Number:		"<<endl;
	cin>>num1;
	cout<<"Enter Your Second Number:		"<<endl;
	cin>>num2;
		
	// For Getting An Operator From User
	char op;
	cout<<"Enter an Operator like as +,-,/..etc"<<endl;
	cin>>op;
	
	//Conditional Programming 
	
	
	switch(op) {
	
	// Cases of Switch Statements
	
	case '+':
		result = num1 + num2;
		cout<<"Result is =	"<<result<<endl;
    break;
	case '-':
		result = num1 - num2;
		cout<<"Result is =	"<<result<<endl;
	break;
	case '*':
		result = num1 * num2 ;
		cout<<"Result is=	"<<result<<endl;
	break;
	case '/':
		result = num1 / num2;
		cout<<"Result is=	"<<result<<endl;
	break;
	
	// If a User enter a wrong operator then default case will be executed
	
	default:
		cout<<"You Entered an Invalid Operator"<<endl;
	break;
}
	return 0;
}
