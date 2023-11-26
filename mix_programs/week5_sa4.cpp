// Depending on age (decimal number and gender
// (m / f), print a personal title:
// “Mr.” – a man (gender “m”) – 16 or more years old.
// “Mister” – a boy (gender “m”) under 16 years.
// “Ms.” – a woman (gender “f”) – 16 or more years old.
// “Miss” – a girl (gender “f”) under 16 years.

#include <iostream>
#include <string>
using namespace std;
int main()
{
float age;
char gender;
cout<<"How are you old?"<<endl;
cin>>age;
cout<<"||>>> Are You male or Female? <<<|||"<<endl;
cout<<"Press m for male\nPress f for female"<<endl;
cin>>gender;
if(gender == 'm'){
    if(age < 16){
        cout<<"Mister"<<endl;
    }else{
        cout<<"Mr"<<endl;
    }

}else if(gender == 'f'){
    if(age < 16){
        cout<<"Miss"<<endl;
    }else{
        cout<<"Ms"<<endl;
    }

}else{
    cout<<"Enter Valid Input."<<endl;
}  
return 0;
}