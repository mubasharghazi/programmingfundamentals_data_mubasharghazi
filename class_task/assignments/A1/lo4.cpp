// Program for Check you enter a vovel letter
#include<iostream>
using namespace std;
int main() {
	char v;
	cout<<"Enter a Letter:	";
	cin>>v;
	
	if( v == 'a'|| v=='e'||v=='i'||v=='o'||v=='u' ) {
		
		cout<<"You Enter a Vowel";
	}else if(v=='A'||v=='E'||v=='I'||v=='O'||v=='U') {	
		cout<<"It is a Vowel";
	}else {
		cout<<"It is not vovel";	
	}
	return 0;
}
