#include <iostream>
using namespace std;
int main() {
    // Get the range from the user
    int start, end;
    cout << "Enter the starting and ending  of the range: ";
    cin >> start; 
	cin>> end;

    // Display prime numbers in the given range
    cout << "Prime numbers between " << start << " and " << end << " are: ";

    for (int num = start; num <= end; ++num) {
        // Check if the current number is prime
        bool isPrime = true;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        // Print the prime number
        if (isPrime) {
            cout << num << " ";
        }
    }

    cout <<endl;
    return 0;
}
