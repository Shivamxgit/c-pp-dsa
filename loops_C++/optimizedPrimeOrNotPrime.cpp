#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number to be checked: ";
    cin >> n;

    if (n < 2) { // 1 is not a prime number
        cout << "NOT PRIME";
        return 0;
    }

    bool isPrime = true; // Assume the number is prime
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break; // Exit the loop as soon as a factor is found
        }
    }

    if (isPrime) {
        cout << "PRIME";
    } else {
        cout << "NOT PRIME";
    }

    return 0;
}