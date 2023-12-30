#include<iostream>
using namespace std;
int main() {
    int number,counter = 1;
    do{
        cout<<"Enter a Number: "<<endl;
        cin>>number;
        if(number == 7){
            cout<<"You Guess! Successfully."<<endl;
            break;
        }
        ++counter;
    }while(counter <= 100);
    return 0;
}
