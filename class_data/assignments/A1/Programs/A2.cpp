// Program for Calculate area of Rectangle
#include<iostream>
using namespace std;
int main() {
	double lenght,width,area; // Declaration
	cout<<"Enter Lenght:	"; // for GUI(User Interaction)
	cin>>lenght; // For getting lenght from user
	cout<<"Enter Width: 	"; 
	cin>>width; // getting width from user
	area = lenght * width ; // fomula for calcule area of rectangle
	cout<<"Area of Rectangle:   "<<area;
	return 0;
}
