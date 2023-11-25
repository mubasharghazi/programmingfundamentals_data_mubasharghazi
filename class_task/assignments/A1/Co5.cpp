// Program to find you enter a letter or not
#include <iostream>
using namespace std;
int main() {
	
	char ch;
	cout<<"Enter a Character:	";
	cin>>ch;
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << "The character is a letter." <<endl;
    } else{
    	cout<<"The Character is not a Letter."<<endl;
	}
        	
	return 0;
}
