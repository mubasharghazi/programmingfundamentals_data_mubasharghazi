#include<iostream>
using namespace std;
int main() {
    int number,digit,reverse_number = 0;
    cout<<"Enter a Number: "<<endl;
    cin>>number;
    do{
        digit = number % 10; // to get last digit
        reverse_number = reverse_number * 10 + digit; //
        number = number / 10;
    }while(number != 0);
    cout<<"Reverse Number: "<<reverse_number<<endl;
    return 0;
}
