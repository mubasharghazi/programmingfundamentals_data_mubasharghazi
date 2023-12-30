#include<iostream>
using namespace std;
int main() {
    // Variable Declaration
    int n,num,rev = 0,digit;
    // Taking Input from User
    cout<<"Enter a Number:  "<<endl;
    cin>>num;
    // assigning value of num to n variable
    n = num;
    // while loop
    while(num != 0){
        digit = num % 10; // 121 % 10 = 1
        rev = (rev * 10) + digit; // rev=1
        num = num / 10 ; // 12
    }
    if(n==rev){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome Number"<<endl;
    }
    return 0;
}
