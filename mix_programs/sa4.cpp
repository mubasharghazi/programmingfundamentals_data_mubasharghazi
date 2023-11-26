//  Write a program which takes a number from the 
// user if the number is not equal to 200, it asks the user 
// to enter 4 more numbers and displays the average of 
// these numbers

#include <iostream>
using namespace std;
int main()
{
double number;
int num1,num2,num3,num4,average;
cout<<"Enter a Number: "<<endl;
cin>>number;
if(number != 200){
    cout<<"Enter First Number: "<<endl;
    cin>>num1;
    cout<<"Enter Second Number: "<<endl;
    cin>>num2;
    cout<<"Enter Third Number: "<<endl;
    cin>>num3;
    cout<<"Enter Fourth Number: "<<endl;
    cin>>num4;
    average = (num1+num2+num3+num4) / 4 ;
    cout<<"Average of These above Four Numbers: "<<average<<endl;
}else{
    cout<<"Programs Ends.."<<endl;
}  
return 0;
}