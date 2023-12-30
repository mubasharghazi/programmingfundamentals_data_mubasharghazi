#include<iostream>
using namespace std;
int main() {
    int i,j;
     for(i=4; i>=1;i--){ // to print diagonal
      // for(i=1; i<=4;i++){ // To print sehdha

        for(j=1; j<=i ;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
    }
