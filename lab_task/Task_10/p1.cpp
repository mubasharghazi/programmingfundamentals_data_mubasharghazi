#include<iostream>
using namespace std;
int main() {
    int counter = 1;
    while(counter <= 20){
        int sq = counter * counter;
        cout<<sq<<endl;
        ++counter;
    }
    return 0;
}
