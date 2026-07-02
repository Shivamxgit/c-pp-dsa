#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Using the ternary operator
    string result = (number % 2 == 0) ? "Even" : "Odd";

    cout << "The number is " << result << "." << endl;

    return 0;
}