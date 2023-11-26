// Excercise # 2
// 2.1 Basic Nested if-else:
// Create a program that uses nested if-else statements to determine the grade of a student based on their 
// percentage. Consider different grade ranges (e.g., A, B, C, D, F).
#include <iostream>
using namespace std;
int main()
{

    // Code for Exercise#2
    // double obtained,total_marks,percentage;
    // cout<<"Please Enter Your Obtained Marks."<<endl;
    // cin>>obtained;
    // cout<<"Enter Total Marks of Exam.."<<endl;
    // cin>>total_marks;
    // percentage =(obtained / total_marks) * 100 ;
    // if(percentage >= 80 && percentage <= 100){
    //     if(percentage >= 90){
    //             cout<<"Your Grade is A+"<<endl;
    //     }else{
    //         cout<<"Your Grade is A"<<endl;
    //     }
    // }else if(percentage >= 70 && percentage <= 79){
    //     if(percentage >= 75){
    //         cout<<"Your Grade is B+"<<endl;
    //     }else{
    //         cout<<"Your Grade is B"<<endl;
    //     }
    // }else if(percentage >= 50 && percentage <= 69){
    //     if(percentage >= 60){
    //         cout<<"Your Grade is C"<<endl;
    //     }else{
    //         cout<<"YOUR Grade is D"<<endl;
    //     }
    // }else{
    //     cout<<"Your Grade is F"<<endl;
    // }
// Exercise # 3
// Write a program that uses a switch statement to determine
// the day of the week based on a character 
// input (e.g., 'M' for Monday, 'T' for Tuesday, etc.).
//   code for Exercise # 3
    char dayCode;
    cout << "Enter the day code (M, T, W, H, F): ";
    cin >> dayCode;
 // Switch statement with characters
    switch (dayCode) {
    case 'M':
    cout << "Monday" << endl;
    break;
    case 'T':
    cout << "Tuesday" <<endl;
    break;
    case 'W':
    cout << "Wednesday" <<endl;
    break;
    case 'H':
    cout << "Thursday" <<endl;
    break;
    case 'F':
    cout << "Friday" <<endl;
    break;
    default:
    cout << "Invalid day code" << endl;
    }
    return 0;
}