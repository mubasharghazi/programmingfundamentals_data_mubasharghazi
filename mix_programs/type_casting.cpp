#include <iostream>
#include <string>
using namespace std;
int main()
{
// Write a C++ program that takes an integer as input and converts it to a double. Print both the 
// integer and double values.

int integerValue; // Variable Declaration
// take Input form User
cout<<"Enter a Number: "<<endl;
cin>>integerValue;
// Explicit Type casting
double doubleValue = static_cast<double>(integerValue);
cout<<"Before Type Casting: "<<integerValue<<endl;
cout<<"After Type Casting:  "<<doubleValue<<endl;

return 0;
}