#include<iostream>
#include<string>
using namespace std;
int main() {
    string elements[9];
    string transpose[9];
    cout<<"Enter elements of 3 by 3 Matrix."<<endl;
    for(int i=0; i<9; i++){
        cin>>elements[i];
    }
    cout<<"Your Matrix is: \n"<<endl;
    for(int i=0; i<9; i++){
        cout<<elements[i]<<" ";
        if(i==2){
            cout<<endl;
        }else if(i==5){
            cout<<endl;
        }
    }
    //swaping indexes of elements array with transpose array
    transpose[0]=elements[0];
    transpose[1]=elements[3];
    transpose[2]=elements[6];
    transpose[3]=elements[1];
    transpose[4]=elements[4];
    transpose[5]=elements[7];
    transpose[6]=elements[2];
    transpose[7]=elements[5];
    transpose[8]=elements[8];
    cout<<endl<<endl;
    cout<<"After Transpose Your Matrix is: "<<endl;
    for(int i=0; i<9; i++){
        cout<<transpose[i]<<" ";
        if(i==2){
            cout<<endl;
        }else if(i==5){
            cout<<endl;
        }
    }
}
