// Let’s Write a Program for Fruit Shop but the shop has one restriction 
// that Customer can only buy one fruit at time. Customer enjoys following 
// Discounts:
// Fruits Discount
// Apple 20%
// Mango 15%
// Grapes 10%
// The discount applies on total amount. For simplicity, let take the 
// 2$ price per kg for every Fruit.
// The Program takes Fruit Name and Number of KGs as Input that 
// customer has bought. The Output of the Program will be the actual 
// amount, discount and payable after discount

// #include <iostream>
// using namespace std;
// int main(){
//  string fName;
//  float kiloGram, price, discount, payable;
//  cout << "Fruit Name: ";
//  cin >> fName;
//  cout << "Number of KGs: ";
//  cin >> kiloGram;
//  price = kiloGram * 2;
//  if (fName == "Apple"){
//  discount = price * 20 / 100;
//  payable = price - discount;}
//  if(fName == "Mango"){
//  discount = price * 15 / 100;
//  payable = price - discount;}
//  if(fName == "Grapes"){
//  discount = price * 10 / 100;
//  payable = price - discount;}
//  cout << "Actual Amount: " << price << endl;
//  cout << "Discounted Amount: " << discount << endl;
//  cout << "Payable after Discount: " << payable << endl;
// }

#include <iostream>
#include <string>
using namespace std;
int main()
{
string fruit_name;
double price = 2,total,discount,pay,mass_of_fruit;
cout<<"Enter Fruit Name(Apple,Grapes,Mango): "<<endl;
cin>>fruit_name;
cout<<"Enter mass of Fruit in Kgs..."<<endl;
cin>>mass_of_fruit;
total = mass_of_fruit * price;
if(fruit_name == "Apple"){
    cout<<"Total Price is "<<total<<endl;
    discount = total * 20/100 ;
    pay = total - discount;
    cout<<"After Discount please pay only "<<pay<<endl;
}else if(fruit_name == "Grapes"){
    cout<<"Total Price is "<<total<<endl;
    discount = total * 10/100 ;
    pay = total - discount;
    cout<<"After Discount please pay only "<<pay<<endl;
}else if(fruit_name == "Mango"){
    cout<<"Total Price is "<<total<<endl;
    discount = total * 15/100 ;
    pay = total - discount;
    cout<<"After Discount please pay only "<<pay<<endl;
}
return 0;
}