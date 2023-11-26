//  Write a program which takes a number as input from 
// the user. If the number is more than 200 it asks the 
// user to enter 4 more numbers and displays the sum of 
// the first 2 numbers and multiplication of the last 2 
// numbers on separate lines.


#include <iostream>
using namespace std;
int main()
{
double number;
int num1,num2,num3,num4;
cout<<"Enter a Number: "<<endl;
cin>>number;
if(number > 200){
    cout<<"Enter First Number: "<<endl;
    cin>>num1;
    cout<<"Enter Second Number: "<<endl;
    cin>>num2;
    cout<<"Enter Third Number: "<<endl;
    cin>>num3;
    cout<<"Enter Fourth Number: "<<endl;
    cin>>num4;
    cout<<"Sum of first two numbers "<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
    cout<<"Multiplication of last two numbers "<<num3<<" x "<<num4<<" = "<<num3*num4<<endl;
}else{
    cout<<"Programs Ends.."<<endl;
}  
return 0;
}