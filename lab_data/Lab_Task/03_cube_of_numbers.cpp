#include <iostream>
using namespace std;
int main() {
	double start,end,result;
	cout<<"Enter a starting Number: "<<endl;
	cin>>start;
	cout<<"Enter an Ending Number: "<<endl;
	cin>>end;
	for(start ; start <= end; start++){
		result = start*start*start;
		cout<<"Cube of "<<start<<" is = "<<result<<endl;
	}
	
	
	return 0;
}
