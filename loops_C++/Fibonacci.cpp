#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 0, b = 1, next;

    if (n <= 0) {
        cout << "Please enter a positive number.";
    } else {
        cout << "Fibonacci Series: ";
        for (int i = 1; i <= n; i++) {
            cout << a << " ";
            next = a + b;
            a = b;
            b = next;
        }
    }

    return 0;
}
