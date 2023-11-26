// Ask the user to enter marks of 5 subjects (Total marks 
// for 5 subjects are 500) and calculate the percentage. 
// If percentage is above or equal to 70 display “you are 
// brilliant student” otherwise display “Keep working 
// harder”
#include <iostream>
using namespace std;
int main()
{
// 1 Method
// double sub1,sub2,sub3,sub4,sub5,obtained,percentage;  
// cout<<"Enter First Subject Marks form 100marks"<<endl;
// cin>>sub1;
// cout<<"Enter Second Subject Marks form 100marks"<<endl;
// cin>>sub2;
// cout<<"Enter Third Subject Marks form 100marks"<<endl;
// cin>>sub3;
// cout<<"Enter Fourth Subject Marks form 100marks"<<endl;
// cin>>sub4;
// cout<<"Enter last Subject Marks form 100marks"<<endl;
// cin>>sub5;
// obtained = sub1+sub2+sub3+sub4+sub5;
// percentage = (obtained / 500) * 100;

double percentage,obtained_marks;
cout<<"Enter your obtained Marks form 500 Marks. "<<endl;
cin>>obtained_marks;
percentage = (obtained_marks / 500) * 100;
if(percentage >= 70){
    cout<<"You are a Brillient Student."<<endl;
    cout<<"Your Percentage is = "<<percentage<<endl;
}else {
    cout<<"Keep working Harder"<<endl;
}
return 0;
}