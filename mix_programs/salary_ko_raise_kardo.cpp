// Write a C++ program to 
// give a 10% raise in salary if the 
// experience exceeds 15 years, or
// the employee’s position is AP. The 
// program should take salary, 
// experience, and employee’s 
// position as input, and the program 
// should return the updated salary.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Increase Salary Based on Experience or Position."<<endl;
    int salary,experience,updated_salary;
    string position;
    cout<<"Which Position You Have ?"<<endl;
    cin>>position;
    cout<<"How many years have you experience? "<<endl;
    cin>>experience;
    cout<<"Enter Your Salary: "<<endl;
    cin>>salary;

    // if(experience >= 15 || position == "AP") { // AP-Admin Position
    if(!(position == "AP")){
        updated_salary = salary +salary * (10.0 / 100);
        cout<<"Your Increased Salary is: "<<updated_salary<<endl;
    }else{
        cout<<"No Chance in Increase Your Salary."<<endl;
    }
    

return 0;
}