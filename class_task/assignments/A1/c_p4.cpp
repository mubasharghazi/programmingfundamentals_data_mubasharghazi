// Program for checking user enter a lower case , upper case or digit ?
#include<iostream>
using namespace std;
int main() {
	char ch; // Declaration
	cout<<"Enter a Character"<<endl; // For GUI
	cin>>ch; // for input 
	
	if(ch >= 'a' && ch <='z') { // case 1
		cout<<"You entered a lower case letter"<<endl;
	}else if(ch >= 'A' && ch <= 'Z') { // case 2
		cout<<"You entered a upper case letetr"<<endl;
	}else if(ch >= '0' && ch <='9') { // case 3
	cout<<"You entered a digit"<<endl;
	} else { // at last, case 4
		cout<<"You entered a special character"<<endl;
	}	
	
	return 0;
}
