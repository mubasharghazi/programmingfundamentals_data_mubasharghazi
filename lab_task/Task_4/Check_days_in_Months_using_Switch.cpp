// Program for checks days in months like as 31 days in march
#include<iostream>
using namespace std;
int main() {
	// Variable Declaration
	int month,year;
	// for gui and get month from user
	cout<<"Enter a Month as 1,2,3..12"<<endl;
	cin>>month;
	// Selection Statement 
	switch(month) {
	// Different Cases(options) for Selection
	case 1:
		cout<<"31 days in January";
    break;
	case 2:
		// For leap year
		cout<<"Enter Year as 2006,2007...:		"<<endl;
		cin>>year;
		if (year % 4 ==0) {
			cout<<year<<" is a Leap Year"<<endl;
			cout<<"29 days in Febuary"<<endl;
		} else {
			cout<<"28 days in Febuary"<<endl;
		}
	break;
	case 3:
		cout<<"31 days in March"<<endl;
	break;
	case 4:
		cout<<"30 days in April"<<endl;
	break;
	case 5:
		cout<<"31 days in May"<<endl;
	break;
	case 6:
		cout<<"30 days in June"<<endl;
	break;
	case 7:
		cout<<"31 days in July"<<endl;
	break;
	case 8:
		cout<<"31 days in August"<<endl;
	break;
	case 9:
		cout<<"30 days in September"<<endl;
	break;
	case 10:
		cout<<"31 days in October"<<endl;
	break;
	case 11:
		cout<<"30 days in November"<<endl;
	break;
	case 12:
		cout<<"31 days in December"<<endl;
	break;
	// if above cases is not fulfill then default case will be Run
	default:
		cout<<"Invalid Month"<<endl;
	break;
}
	return 0;
}
