// We have an integer (the number of points). Bonus score are 
// charged on it, according to the rules described below. Write a 
// program that calculates bonus score for the number entered 
// and total points with bonuses.
// ● If the number is up to 100 including, bonus score is 5.
// ● If the number is larger than 100, bonus score is 20% of 
// the number.
// ● If the number is larger than 1000, bonus score is 10% of 
// the number.
// ● Additional bonus score (accrued separately from the 
// previous ones):
// ○ for even number give + 1 point.
// ○ for number, that ends with 5 give + 2 points.

#include <iostream>
using namespace std;
int main()
{
  int number;
  float bonus;
  cout<<"Enter Your Score: "<<endl;
  cin>>number;
// Multiple if Conditions

  if(number <= 100){
    bonus = 5;
  }
  if(number > 100){
    bonus = number * (20.0 / 100);
  }
  if(number > 1000){
    bonus = number * (10.0 / 100);
  }
  if(number % 2 == 0){
    bonus = bonus + 1;
  }
  if(number % 10 == 5){
    bonus = bonus + 2;
  }
    cout<<"After Applying Bonuses.\n Your Score is "<<number+bonus<<endl;
    return 0;
}