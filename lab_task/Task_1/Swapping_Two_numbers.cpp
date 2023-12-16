#include <iostream>  // include header file
using namespace std;
int main() {             // main program where the actual execution will be start
	int num1,num2,temp; // Declaration of Variables
	cout<<"Enter Your First Number:"<<endl; // For Print string on Window
	cin>>num1; //Getting Input from User
	cout<<"Enter Your Second Number:"<<endl; // For Print string on Window
	cin>>num2; // Getting Input From User
	
	temp = num1; // Number1 ko equal kar dia temp k
	num1 = num2;	// Then phir Number1 ka box jo k empty hai us mein Number2 ki value assign kardi
	num2 = temp;	// At last, phir num2 ke box mein temp ki value assign kardi
	
	cout<<"After Swapping -Num1="<< num1<<endl;  //For Print On Screen Results
	cout<<"After Swapping -Num2="<< num2; 	//For Print On Screem Results
	return 0; // Nothing Will be return 
}
