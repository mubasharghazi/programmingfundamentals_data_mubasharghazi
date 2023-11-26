// Write the code which asks for a login.
// If the visitor enters "Admin", then prompt for a password. If the input is an 
// empty line – show “Canceled”. If it is another string, then show “I don’t 
// know you”.
// The password is checked as follows:
// If it equals “TheMaster”, then show “Welcome!”,
// Another string – show “Wrong password”
// For an empty string or cancelled input, show “Canceled”
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"||>>>>> To Login, Please Fulfill Our Requirements.<<<<||"<<endl;
    string user,password; // Variable Declaration
    cout<<"Who's There ?"<<endl;
    // cin>>user; // simple input taking
    getline(cin,user); // to get input from user
//  getline used to read a line of input from the user.
    if(user == "Admin"){
        cout<<"Enter Your Password.."<<endl;
        cin>>password;
        if(password == "TheMaster"){
            cout<<"Welcome! Admin Sab"<<endl;
        }else{
            cout<<"Wrong Password"<<endl;
        }
    }else if(user.empty()){
        cout<<"Canceled"<<endl;
    }else{
        cout<<"I don't know you."<<endl;
    }
return 0;
}