#include <iostream>
using namespace std;
int main() {
	
	int x,sq;
	cout<<"Enter a Number:	";
	cin>>x;
	sq = x*x ;
	cout<<"Square of Number is=  "<<sq<<endl;
	
	if(sq > 0) {
		cout<<"Result of x is Positive"<<endl;
	}
	return 0;
}
