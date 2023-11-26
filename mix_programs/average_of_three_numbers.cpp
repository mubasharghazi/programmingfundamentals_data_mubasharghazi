//  Write a C++ program that calculates the average of three integers. Display the result as a 
// floating-point number
#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    double average;
    cout<<"Enter Three numbers :"<<endl;;
    cin>>num1>>num2>>num3;
    average = (num1+num2+num3) / 3 ;
    cout<<"Average is= "<<average<<endl;
    return 0;
}