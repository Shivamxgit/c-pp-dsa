#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number.";
    } else {
        int fib[n];  // create array to store Fibonacci terms

        fib[0] = 0;
        if (n > 1)
            fib[1] = 1;

        for (int i = 2; i < n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        cout << "Fibonacci Series: ";
        for (int i = 0; i < n; i++) {
            cout << fib[i] << " ";
        }
    }

    return 0;
}
