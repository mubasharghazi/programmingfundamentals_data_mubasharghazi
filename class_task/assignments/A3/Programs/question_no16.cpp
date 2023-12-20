#include<iostream>
using namespace std;
int main() {
    // let length of array is 7
    float values[7];
    cout<<"Enter Floating Values:  "<<endl;
    for(int i=0; i<7; i++){
        cin>>values[i];
    }
    float aver,sum=0;
    for(int i=0; i<7; i++){
        sum = sum +values[i];
    }
    aver = sum/7;
    cout<<"Average is= "<<aver<<endl;
   return 0;
}
