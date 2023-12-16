#include<iostream>
using namespace std;
int main() {
    int sum = 0; // Declare a variable to store sum
    for(int i = 1; i <= 50; i++){
        sum = sum + i;
    }
    cout<<"Sum of 1-50 All natural Number is = "<<sum<<endl;
    return 0;
}
