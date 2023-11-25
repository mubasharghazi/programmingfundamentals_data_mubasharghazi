#include <iostream>
using namespace std;
int main() {
    char ch; // Replace 'M' with the character you want to check
	cout<<"Enter a Character: "<<endl;
	cin >> ch;
    int asciiCode = static_cast<int>(ch); // TypeCasting

    cout << "The ASCII code for " << ch << " is " << asciiCode << std::endl;

    return 0;
}

