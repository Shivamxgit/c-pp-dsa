#include <iostream>
using namespace std;

int main() {
    int z = 10;

    cout << "Initial value of z: " << z << endl;

    z += 5;  // Add 5 to z
    cout << "After 'z += 5': " << z << endl;

    z *= 2;  // Multiply z by 2
    cout << "After 'z *= 2': " << z << endl;

    z -= 3;  // Subtract 3 from z
    cout << "After 'z -= 3': " << z << endl;

    z /= 4;  // Divide z by 4
    cout << "After 'z /= 4': " << z << endl;

    return 0;
}