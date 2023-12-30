#include<iostream>
using namespace std;
int main() {

    cout<<"|*|*|-_-| Fibonacci Series |-_-|*|*|"<<endl;

    int a,b,result,n;
    cout<<"Enter Number of Terms: "<<endl;
    cin>>n;
    a = 0;
    b = 1;
    for(int i = 1; i<=n; i++){
        cout<<a<<" ";
        result = a + b;
        a = b;
        b = result;
    }
    return 0;
}
