// Write a C++ program that calculates the area of a rectangle. Take the length and width as 
// input (both integers) and display the area as a double.
#include <iostream>
using namespace std;
int main()
{
    // declare variables
    int lenght,width,area;
    // Take input from user
    cout<<"Enter Length: "<<endl;
    cin>>lenght;
    cout<<"Enter Width:  "<<endl;
    cin>>width;
    // To Calculate Area of Rectangle we use a Formula   Area = lenght * Width
    area = lenght * width;
    // is trah bhi ho sakta hai
    double doubleValue = static_cast<double>(area);
    cout<<"Area of Rectangle is = "<<doubleValue<<endl;
    return 0;
}