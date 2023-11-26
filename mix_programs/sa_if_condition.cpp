// Mubashar Ghazi is a student and he mostly gets confused when 
// trying to differentiate between positive and negative 
// values. He requires a program which helps him to 
// convert grams into kilograms but if he enters a value in 
// negative the program tells him “You entered the wrong 
// value”
#include <iostream>
#include <string>
using namespace std;
int main()
{
  double grams,kg;
  cout<<"Enter Grams : "<<endl;
  cin>>grams;
  if(grams > 0){
    cout<<"}}} You Entered a positive value.{{{"<<endl;
    kg = grams / 1000 ; // 1kg = 1000 grams
    cout<<grams<<" into kilogram is = "<<kg<<endl;
  }else{
    cout<<">>>>>>>> You Entered a Negative Value.<<<<<<<<<"<<endl;
  }
return 0;
}