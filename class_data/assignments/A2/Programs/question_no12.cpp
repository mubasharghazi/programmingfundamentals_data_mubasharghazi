#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    int randomNumber;

    while ((randomNumber = rand() % 50 + 1) <= 40) {
        cout << "Generated number: " << randomNumber << endl;
    }

    cout << "Generated number is greater than 40. Exiting the loop." << endl;

    return 0;
}

