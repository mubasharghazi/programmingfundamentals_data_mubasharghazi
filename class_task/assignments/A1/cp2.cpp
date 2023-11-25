// Program for Checks you are Child, Teenager, Adult,etc
#include<iostream>
using namespace std;
int main() {
	int age;
	cout<<"Enter Your Age:	";
	cin>>age;
	
	if (age <= 12) {
		cout<<"You are Child"<<endl;
	}else if (age >= 13 && age <= 19) {
		cout<<"You are Teenager";
	}else if (age >= 20 && age <= 59) {
		cout<<"You are Adult"<<endl;
	}else{
		cout<<"You are Senoir"<<endl;
	}
	return 0;
}
