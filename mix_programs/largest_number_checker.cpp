// Write a C++ program that inputs 
// three numbers from the user and 
// prints “Largest” if the first 
// number is largest and prints “Not 
// Largest” otherwise.

#include <iostream>
using namespace std;
int main()
{
cout<<"||>>> Largest Number Finder From Three Numbers <<<||"<<endl;
int num1,num2,num3;
cout<<"Enter First Number: "<<endl;
cin>>num1;
cout<<"Enter Second Number: "<<endl;
cin>>num2;
cout<<"Enter Third Number: "<<endl;
cin>>num3;
// Best Approch ye bhi Asan tarika hy
//  && ye AND operator hy. agr both conditions true hogi tu
// tu hi final result true hoga ga otherwise false
if(num1>num2 && num1 > num3){
    cout<<num1<<" is largest."<<endl;
}else if(num2>num1 && num2 > num3){
    cout<<num2<<" is largest."<<endl;
}else if(num3>num1 && num3>num2){
    cout<<num3<<" is Largest."<<endl;
}




// Simple Method
// if(num1 > num2){
//     if(num1 > num3){
//         cout<<num1<<" is the Largest Number."<<endl;
//     }
// }
// if(num2 > num1){
//     if(num2 > num3){
//         cout<<num2<<" is the Largest Number."<<endl;
//     }
// }
// if(num3 > num1){
//     if(num3 > num2){
//         cout<<num3<<" is the Largest Number."<<endl;
//     }
// }
return 0;
}