// Ghazi is a teacher, he needs a program which helps him to compile his 
// class results. He has 5 subjects (English, Math, Chemistry, Social 
// Science and Biology) marked in detail. Program asks the user to enter 5 
// subjects' marks including student name and displays the total marks, 
// percentage, grade (by percentage) and student name. Every subject has 
// a total 100 marks. Grading policy details are mentioned below in table
// 90-100 percentage A+
// 80-90 percentage A
// 70-80 percentage B+
// 60-70 percentage B
// 50-60 percentage C
// 40-50 percentage D
// Below 40 percentage F


#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Grade Calculator For My Sir Ghazi Sab"<<endl;
    string student_name;
    double eng,math,chem,science,bio,obtained,grade;
    cout<<endl;
    cout<<endl;
    cout<<"Every Subject have 100 Marks."<<endl;
    cout<<"Enter Your English Marks: "<<endl;
    cin>>eng;
    cout<<"Enter Maths Marks: "<<endl;
    cin>>math;
    cout<<"Enter Science Marks: "<<endl;
    cin>>science;
    cout<<"Enter Chemistry Marks: "<<endl;
    cin>>chem;
    cout<<"Enter Biology Marks: "<<endl;
    cin>>bio;
    obtained = math + chem + science + eng + bio;
    grade = (obtained/ 500) * 100 ;

    if(grade >= 90 && grade <= 100){
        cout<<"Your Grade is: A+"<<endl;
    }else if(grade >= 80 && grade <= 89){
        cout<<"Your Grade is: A"<<endl;
    }else if(grade >= 70 && grade <= 79){
        cout<<"Your Grade is: B+"<<endl;
    }else if(grade >= 60 && grade <= 69){
        cout<<"Your Grade is: B"<<endl;
    }else if(grade >= 50 && grade <= 59){
        cout<<"Your Grade is: C"<<endl;
    }else if(grade >= 40 && grade <= 49){
        cout<<"Your Grade is: D"<<endl;
    }else{
        cout<<"Your Grade is: F"<<endl;
    }

cout<<"Your Percentage is: "<<grade<<endl;

return 0;
}