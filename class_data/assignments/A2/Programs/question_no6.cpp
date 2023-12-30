#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int number;
    cout << "Enter a Number: " << endl;
    cin >> number;

    bool flag = false;

    for(int i = 2; i <= sqrt(number); i++){
        if(number % i == 0){
            cout << number << " is a Non-Prime Number." << endl;
            flag = true;
            break;
        }
    }

    if(flag == false){
        cout << number << " is a Prime Number." << endl;
    }

    return 0;
}
