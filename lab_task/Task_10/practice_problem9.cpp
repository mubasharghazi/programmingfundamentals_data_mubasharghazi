#include<iostream>
#include<string>
using namespace std;
int main() {
    string password;
    int i =1;
    do{
        cout<<"To Login. Plz Enter Your Password: "<<endl;
        cin>>password;
        if(password == "password123"){
            cout<<"You Login Successfully."<<endl;
            break;
        }
        ++i;
    }while(i <= 100);

    return 0;
}
