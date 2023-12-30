#include <iostream>
using namespace std;
int main() {
	cout<<"Grade Calculator!"<<endl;
	double age,total_marks,obtained_marks;
	cout<<"Enter Total Marks:	"<<endl;
	cin>>total_marks;
	cout<<"Enter Obtained Marks:	"<<endl;
	cin>>obtained_marks;
	age = (obtained_marks/total_marks) * 100 ;
	cout<<"Your Percentage is: "<<age<<endl;
		
	switch(age/10) {
		case 10:
		case 9:
			cout<<"Your Grade is A"<<endl;
			break;
		case 8:
		case 7:
			cout<<"Your Grade is B"<<endl;
			break;
		case 6:
		case 5:
			cout<<"Your Grade is C"<<endl;
			break;
		default:
			cout<<"Alas! You Fail"<<endl;
	}
	
	return 0;
}
