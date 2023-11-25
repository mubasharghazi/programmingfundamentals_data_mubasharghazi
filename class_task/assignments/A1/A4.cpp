// Program for converting celsius to fahrenheit

#include <iostream>
using namespace std;
int main() {
	double celsius, fahrenheit; // declaration
	cout<<"Enter Celsius:\t";
	cin>>celsius;
	fahrenheit = (celsius * 9/5) + 32 ; // formula for calculation fahrenheit
	cout<<"Fahrenheit is =	"<<fahrenheit;
	return 0;	
}
