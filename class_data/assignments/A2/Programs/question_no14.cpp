#include <iostream>
using namespace std;
int main() {
    int a = 3; // First term
    int r = 3; // Common ratio
    int n = 10; // Number of terms to display
    int i = 0; // Counter for the loop

    cout << "Geometric Progression Series: "<<endl;
    //loop
    while (i < n) {
        cout << a << " ";
        a *= r; // Multiply the previous term by the common ratio
        i++;
    }
    return 0;
}
