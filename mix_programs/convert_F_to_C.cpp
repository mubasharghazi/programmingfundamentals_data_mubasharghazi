// Take temperature in Fahrenheit from user and convert 
// it into Celsius. If the temperature in Celsius is greater 
// than or equal to 40, display “Its hot today” otherwise 
// display “Nice weather” 

#include <iostream>
#include <string>
using namespace std;
int main()
{
double temperature,celsius;
cout<<"Enter Temperature in Fahrenheiht: \t ";
cin>>temperature;
celsius = 5/9 * (temperature -32);
if(celsius >= 40){
    cout<<"Its hot today."<<endl;
}else{
    cout<<"Nice Day"<<endl;
}
return 0;
}