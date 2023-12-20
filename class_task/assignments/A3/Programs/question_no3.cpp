#include <iostream>
using namespace std;
int main() {
    int matrix[100];
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows * cols; i++) {
        cin >> matrix[i];
    }
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += matrix[i * cols + i];
    }
    cout << "Sum of diagonal elements: " << sum << endl;
    return 0;
}
