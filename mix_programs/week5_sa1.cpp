// Write a program that asks the user for 3 different integers. If one of 
// those integers is equal to or greater than 50, print out “One of Value 
// is too large.”
#include <iostream>
using namespace std;
int main()
{
int num1,num2,num3;
cout<<"Please Enter Three Numbers"<<endl;
cin>>num1>>num2>>num3;
if(num1 >= 50 || num2 >= 50 || num3 >= 50){
    cout<<"One of Value is too Large"<<endl;
}  
return 0;
}