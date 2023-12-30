#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int number;
	cout<<"Enter a Number: "<<endl;
	cin>>number;
	bool loopchecker = 0; // Check karne k liye k loop chala bhi k nahi
	
	for(int i =2 ; i<=sqrt(number) ; i++){
	
		if(number % i == 0){
			cout<<"Given Number is not a Prime Number."<<endl;
			loopchecker = 1;
			break;
		}
	}
	if(loopchecker == 0){
	
		
		cout<<"Given Number is a Prime Number."<<endl;
	}
	
	
	
	
	return 0;
}
