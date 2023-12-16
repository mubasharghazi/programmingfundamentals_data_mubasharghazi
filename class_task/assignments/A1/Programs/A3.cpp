// Program for Calculate Perimeter of Square
#include<iostream> // HeaderFile
using namespace std;
int main() {
	
	double sidevalue,perimeter; // Variable declaration
	cout<<"Enter a side lenght: "; // for  user interaction
	cin>>sidevalue; // input side value form user 
	perimeter = 4 * sidevalue; // formula for calcule the perimeter of square
	cout<<"Perimeter of Square is ="<<perimeter;
	return 0;
}
