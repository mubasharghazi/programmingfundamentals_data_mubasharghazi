#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;
    int arr[n][n];
    cout << "Enter the elements of the square matrix: " << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i][i];
    }
    cout << "The sum of diagonal elements of the square matrix is: " << sum << endl;
    return 0;
}
