#include<iostream>
using namespace std;
int main() {
    int number;
    for(int i=1; i <= 100; i++){
        cout<<"Enter a Number: "<<endl;
        cin>>number;
        if(number == 0){
            cout<<"Thanks"<<endl;
            break;
        }
    }
    return 0;
}
