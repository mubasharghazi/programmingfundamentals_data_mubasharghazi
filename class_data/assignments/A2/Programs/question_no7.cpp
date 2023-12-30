#include<iostream>
using namespace std;
int main() {
    int number; // Variable Declare
    // Taking Input From User
    cout<<"Enter a Number: "<<endl;
    cin>>number;
    // declare variable for calculation
    int digit,result = 0;
    // Loop
    // if number greator than 0 & number/10
    for(; number > 0; number /= 10){
        digit = number % 10 ; // to find last digit
        result = result + digit; // Sum of all digits will store in result
    }
    // To print Sum of Digits
    cout<<"Sum of Digits is = "<<result<<endl;

    return 0;
}
