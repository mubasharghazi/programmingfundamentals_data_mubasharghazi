#include<iostream>
using namespace std;
int main() {
    int counter=1,sum = 0;
    while(counter <= 50){
        if((counter % 2) != 0){
            cout<<counter<<endl;
            sum = sum + counter;
        }
       ++counter;
    }
    cout<<"Sum of all Above odd number is = "<<sum<<endl;
    return 0;
}
