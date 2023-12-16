// Program for calculates the price of Movie

#include <iostream>
using namespace std;
int main() {
  // Get the age of the person.
  int age;
  cout << "Enter your age: ";
  cin >> age;

  // Get the time of the showing.
  char time;
  cout << "Is the showing a matinee (before 5 PM)? (Y/N): ";
  cin >> time;

  // Calculate the price of the ticket.
  int price;
  if (age <= 13) {
    price = 5;
  } else if (age < 65) {
    if (time == 'Y' || time == 'y') {
      price = 10;
    } else {
      price = 15;
    }
  } else {
    price = 8;
  }

  // Display the price of the ticket.
  cout << "The price of your ticket is $" << price << endl;
  return 0;
}

