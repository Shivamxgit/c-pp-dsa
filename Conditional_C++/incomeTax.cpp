#include <iostream>
using namespace std;

int main() {
    int income;
    cout << "Enter your income in lacs: ";
    cin >> income;

    if (income < 7) {
        cout << "NO TAX" << endl;
    } 
    else if (income >= 7 && income <= 12) {
        cout << "10% TAX" << endl;
    } 
    else if (income > 12 && income <= 25) {
        cout << "15% TAX" << endl;
    } 
    else {
        cout << "25% TAX" << endl;
    }

    return 0;
}