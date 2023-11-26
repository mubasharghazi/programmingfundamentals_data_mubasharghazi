#include <iostream>
using namespace std;
int main()
{
double price;
cout<<"Enter your total price in dollars $:  "<<endl;
cin>>price;
if(price == 500){
    
    cout<<"Price after Discount\n Please Pay 475$ "<<endl;
}else{
    cout<<"Price after Discount "<<price<<endl;
}
return 0;
}