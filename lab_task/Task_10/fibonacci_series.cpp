#include<iostream>
using namespace std;
int main() {

    int a=0,b=1,temp=0;
    cout<<"Enter Number of terms:"<<endl;
    for(int i = 1; i <= 10; i++){
        cout<<a<<" ";
        temp = a + b;
        a = b;
        b = temp;
    }
    return 0;
}
