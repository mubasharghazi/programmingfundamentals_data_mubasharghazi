// Write a program that asks the user which province they live in. If the 
// province isn’t “Sindh”, print out “You should come visit Sindh 
// sometime!”.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string province;
    cout<<"Which Province You Live Now ?"<<endl;
    cin>>province;
    if (!(province == "Sindh")){
                cout<<"You should Come Visit Sindh Sometime!"<<endl;
    }

return 0;
}