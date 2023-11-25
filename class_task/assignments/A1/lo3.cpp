// program for checks year is leap year or not ?
#include<iostream>
using namespace std;
int main() {
	int year;
	cout<<"Enter a Year:	";
	cin>>year;
	
	if(year % 4 == 0) {
		cout<<"This is a Leap Year.";
	}else{
		cout<<"This is not Leap Year"<<endl;	
	}	
	if(year % 4 == 0) {
		cout<<"It is Divisible by 4 \n"<<endl;
	}
	if(year % 100 != 0){
		cout<<"It is not divisible by 100"<<endl;
	}else{
		cout<<"It is divisible by 100"<<endl;
	}
	if(year % 400 == 0) {
		cout<<"It is Divisible by 400"<<endl;
	}else{
		cout<<"It is Not Divisible by 400"<<endl;
	}
	return 0;
}
