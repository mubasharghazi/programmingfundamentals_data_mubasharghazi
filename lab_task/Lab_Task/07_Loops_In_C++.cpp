#include<iostream>
using namespace std;
int main() {
//	cout<<"Hello World"<<endl;
//	cout<<"Hello World"<<endl;
//	cout<<"Hello World"<<endl;
//	cout<<"Hello World"<<endl;
//	cout<<"Hello World"<<endl;
//	cout<<"Hello World"<<endl;
//	cout<<"Hello World"<<endl;
//	cout<<"Hello World"<<endl;
//	cout<<"Hello World"<<endl;
//	cout<<"Hello World"<<endl;
//	cout<<"Hello World"<<endl;
//	cout<<"Hello World"<<endl;
//	
//	Types of Loop
//	for(inialization; condition; increment/decrement) {
//		
//		body
//	}
////	For Infinit Loop
//		for(int i = 0; i == 0;){
//			cout<<"Mubashar Ghazi"<<endl;
//		}
////	Mera Tarika
//	int number;
//	cout<<"Enter a number: "<<endl;
//	cin>>number;
//	
//	for (int n = 1; n <= 10; n++){
//		int table = ( n * number);
//		cout<<number<<" x "<<n<<"  = "<< table<<endl;
//	}
//	Sir ka Tarika
//
//	int a;
//	int i;
//	int end;
//	cout<<"Enter a Number: "<<endl;
//	cin>>a;
//	cout<<"Enter Starting Point"<<endl;
//	cin>>i;
//		cout<<"Enetr Ending Point:"<<endl;
//	cin>>end;
//	for(i; i<= end; i++){
//		int c;
//		c = a*i;
//		cout<<c<<endl;
//	}
//	While Loop
//	int i = 0;
//	while(i <= 5){
//		
//		cout<<"Ghazi Sab bas Karo"<<endl;
//		i++;
//	}
//	Table in While Loop

	int table,i,number;
	cout<<"Enter a Number:"<<endl;
	cin>>number;
	i = 1;
	while(i<= 10){
		i++;
		table = i * number;
		cout<<number<<"x"<<i<<"= "<<table<<endl;
	}
	return 0;
}
