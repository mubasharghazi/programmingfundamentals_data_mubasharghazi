// Program for checks you enter a lowercase or uppercase , digit,or special character
#include<iostream>
using namespace std;
int main() {
	
	char ch; // Declaration
	cout<<"Enter a Character:	"; // For GUI
	cin>>ch; // For getting input from user
	if(islower(ch)) { // condition
		cout<<"You entered a lower case letter"<<endl;
	} else if(isupper(ch)) { // case 2
		cout<<"You entered a upper case letter"<<endl;
	}else if(isdigit(ch)) { // case 3
		cout<<"You entered a digit"<<endl;
	}else { //last case
		cout<<"You entered a special letter"<<endl;
	}
	return 0;
}
