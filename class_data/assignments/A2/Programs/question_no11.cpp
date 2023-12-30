#include<iostream>
using namespace std;
int main() {
    int n1,n2,gcd;
    cout<<"Enter a Number: "<<endl;
    cin>>n1;
    cout<<"Enter Second Number: "<<endl;
    cin>>n2;

    while(n2!=0){
        gcd = n2;
        n2 = n1%n2;
        n1=gcd;
    }
    cout<<"GCD of number1 & number2 is "<<gcd<<endl;

    return 0;
}
