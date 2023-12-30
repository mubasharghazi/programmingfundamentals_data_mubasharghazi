#include<iostream>
using namespace std;
int main() {
    int x[10],y[10];
    cout<<"Enter 1st Array Elements."<<endl;
    for(int i=0; i<10; i++){
        cin>>x[i];
    }
    cout<<"Enter 2nd Array elements."<<endl;
    for(int i=0; i<10; i++){
        cin>>y[i];
    }
    int common_number;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
        if(x[i]==y[j]){
            cout<<y[j]<<" is common number."<<endl;
        }
        }
    }
}
