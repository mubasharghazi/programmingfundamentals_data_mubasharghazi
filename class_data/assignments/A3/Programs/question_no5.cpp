//#include<iostream>
//using namespace std;
//int main() {

   // for(int i=0; i<4; i++){ //counter
     //     cout<<endl;
       // for(int j=4; j>0-i; j--){ //working exactly
         //   cout<<"*"<<endl;
        //cout<<"Mubashar"<<endl;
        //}
    //}
#include <iostream>
using namespace std;
int main() {
  //int numRows = 4; // Change this to desired number of rows

  // Outer loop for rows
  for (int i = 1; i <= 4; ++i) {
    // Inner loop for columns
    for (int j = 1; j <= i; ++j) {
      cout << "*"; // Print star with space
    }
    cout << endl<<endl; // Move cursor to next line
  }
  return 0;
}



