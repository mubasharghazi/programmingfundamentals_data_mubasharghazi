#include<iostream>
using namespace std;
int main() {
	cout<<"Simple Measureming Calculator"<<endl;
	cout<<"Enter C if you want to measure area of Circle"<<endl;
	cout<<"Enter T if you want to measure area of Triangle"<<endl;
	cout<<"Enter R if you want to measure area of Rectangle"<<endl;
	cout<<"Enter S if you want to measure area of Square"<<endl;
	char user_choice;
	cin>>user_choice;
	double result;
	if((user_choice == 'C')||(user_choice == 'c')){
		double radius;
		cout<<"Enter Radius: "<<endl;
		cin>>radius;
		result = 3.14 * radius * radius;
		cout<<"Area of Circle is = "<<result<<endl;
	}else if((user_choice == 'T')||(user_choice == 't')){
		double base,height;
		cout<<"Enter Base: "<<endl;
		cin>>base;
		cout<<"Enter Height: "<<endl;
		cin>>height;
		result = 0.5 * base * height;
		cout<<"Area of triangle is = "<<result<<endl;
	}else if((user_choice == 'R')||(user_choice == 'r')){
		double lenght,width;
		cout<<"Enter Lenght: "<<endl;
		cin>>lenght;
		cout<<"Enter Width: "<<endl;
		cin>>width;
		result = lenght * width;
		cout<<"Area of Rectangle is = "<<result<<endl;
	}else if((user_choice == 'S')||(user_choice == 's')){
		double side;
		cout<<"Enter Side lenght: "<<endl;
		cin>>side;
		result = side * side;
		cout<<"Area of Square is = "<<result<<endl;
	}
	
	return 0;
}
