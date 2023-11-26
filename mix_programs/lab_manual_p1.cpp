// write a program that demonstrates explicit typecasting.
// Convert a float to an integer explicitly and 
// print the result.
#include <iostream>
using namespace std;
int main()
{
    // float floatingNumber = 8.9;
    // int integerNumber = static_cast<int>(floatingNumber);
    // cout << "Result after explicit typecasting: " << integerNumber <<endl;
    // Explixit TypeCasting
    double number=3.794;
    int num = static_cast<int>(number);
    cout<<num<<endl;
    // Implicit TypeCasting
    int integerNumber = 10;
    float floatingNumber = 5.5;
    float result = integerNumber + floatingNumber;
    cout << "Result after implicit typecasting: " << result <<endl;

    return 0;
}