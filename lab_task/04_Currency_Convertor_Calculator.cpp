// Make a currency convertor and checker(4 currency)
#include<iostream>
using namespace std;
int main(){
	cout<<"Currency Convertor Calculator"<<endl;
	char user_input;
	cout<<"Convert Dollor into Pkr, Enter d \n Convert Pounds into pkr, Enter p \n Convert rial into pkr, Enter r \n Convert takka into pkr , Enter t"<<endl;
	double result, dollar, rial,pound,pkr,takka;
	cin>>user_input;
	
	if((user_input == 'd')||(user_input == 'D')){
		cout<<"Current Rate of Dollar is 247 pkr"<<endl;
		cout<<"Enter Dollars"<<endl;
		cin>>dollar;
		result = 247 * dollar;
		cout<<"Given Dollar into Pkr is = "<<result;
	}else if((user_input == 'p')||(user_input == 'P')){
		cout<<"Current Rate of Pound is 353 pkr"<<endl;
		cout<<"Enter Pounds"<<endl;
		cin>>pound;
		result = 353 * pound;
		cout<<"Given Pounds into Pkr is = "<<result;
	}else if((user_input == 'r')||(user_input == 'R')){
		cout<<"Current Rate of Rial is 76 pkr"<<endl;
		cout<<"Enter Rial"<<endl;
		cin>>rial;
		result = 76 * rial;
		cout<<"Given Rial into Pkr is = "<<result;
	}else if((user_input == 'T')||(user_input == 't')){
		cout<<"Current Rate of Takka is 2 pkr"<<endl;
		cout<<"Enter Takka"<<endl;
		cin>>takka;
		result = 2 * takka;
		cout<<"Given Dollar into Pkr is = "<<result;
	}else{
		cout<<"Please Enter Valid Input"<<endl;
	}
	
	return 0;
}
