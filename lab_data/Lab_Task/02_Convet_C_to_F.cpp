#include<iostream>
using namespace std;
int main() {
	cout<<"Simple Calculator to Convert Celsius to fahrenheit and Fahrenheit to Celsius."<<endl;
	char user_input;
	float celsius,fahrenheit,result;
	cout<<"Enter a Character \n To Convert Celsius To Fahrenheit enter C \n To Convert Fahrenheit to Celsius enter F"<<endl;
	cin>>user_input;
	if ((user_input == 'C') || (user_input == 'c')) {
		cout<<"Enter Celsius : "<<endl;
		cin>>celsius;
		result = celsius * (9/5) + 32;
		cout<<"Celsius "<<celsius<<" into Fahrenheit is = "<<result;
	}else if((user_input == 'F') ||(user_input == 'f')) {
		cout<<"Enter Fahrenheit : "<<endl;
		cin>>fahrenheit;
		result = (fahrenheit - 32) * 5 / 9;
		cout<<"Given Fahreheit is "<<fahrenheit<<" into Celsius is ="<<result;	
	}else{
		cout<<"You Enter Invalid Input"<<endl;
	}
	return 0;
}
