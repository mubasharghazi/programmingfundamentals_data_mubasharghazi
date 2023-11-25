// Program for determine which one is legel(adult) or not legel
#include <iostream>
using namespace std;
int main() {
	int age; // Declare a Variable to store age in it
	cout<<"Enter Your Age:	";
	cin>>age;
	
	if(age >= 18) { // if age is greater than or equal to 18 then, you are adult otherwise not adult
		cout<<"You are Adult(Legal)";
	}
	else{
		cout<<"You are Child Now (Not Legal)";
	}
		
		
	return 0;
	
}
