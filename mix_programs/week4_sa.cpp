#include <iostream>
using namespace std;
int main()
{
cout<<"||>>> To find Perimeter of Square or circle <<<||"<<endl;    
double value;
char ch;
cout<<"Enter S for Square: \n Enter C for Circle: "<<endl;
cin>>ch;
if((ch == 'S')||(ch == 's')){
    cout<<"Enter Side_Lenght: "<<endl;
    cin>>value;
    cout<<"The Perimeter of Square is = "<< 4 * value<<endl;
}else if((ch == 'C')||(ch == 'c')){
    cout<<"Enter Radius: "<<endl;
    cin>>value;
    cout<<"The Perimeter of Circle is = "<< 6.28 * value<<endl;
}  
return 0;
}