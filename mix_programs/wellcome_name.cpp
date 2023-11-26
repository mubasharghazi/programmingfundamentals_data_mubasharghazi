#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout<<"{|| Wellcome Program ||}"<<endl;
    cout<<"Enter Your Name:  "<<endl;
    cin>>name;
    // cout<<"Wellcome! "<<name<<endl;

    // if(name == "Waqas"){
    if(name != "Waqas"){
        cout<<"Wellcome! Dear "<<name<<endl;
    }else{
        cout<<"Ends Program.. "<<endl;
    }

return 0;
}