// Program for calculates the price of Movie

#include <iostream>
using namespace std;
int main() {
	// Int type Variable Declaration
	int age;
	// for user and gets his age as input
	cout<<"How are You Old?	"<<endl;
	cin>>age;
	// character type variable 
	char choice;
	cout<<"Is the showing a matinee (before 5 PM)? (y/n):"<<endl;
	cin>>choice;
	// Conditional Programming
	if (choice == 'y') {
		// Option1 if user is children then
		if (age <= 12) {
		cout<<"pay 5$ for movei ticket"<<endl;	
		}else if(age >=13 && age<=64){
			
			/* if user is adult then 
			
			
			To checks user is matinee or regular ?
			
			*/
			char check;
			cout<<"If You are matinee then press m \n if you are regular then press r:"<<endl;
			cin>>check;
			if(check == 'r' ){
				cout<<"Pay $15 for Movie"<<endl;
			}else {
				cout<<"Pay $10 for Movie"<<endl;
			}
			
		}else if(age >= 65) {
			cout<<"Pay $8 for Movie"<<endl;
		}
	}else if(choice == 'n') {
			cout<<"Sorry! You are Late."<<endl;
		}else {
			cout<<"Error: Invalid Choice"<<endl;
		}
	return 0;
}
