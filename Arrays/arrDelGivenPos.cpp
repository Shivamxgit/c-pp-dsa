#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[6] = {12, 23, 34, 45, 56, 67};
    int pos;

    cout << "Enter position to delete (1-" << n << "): ";
    cin >> pos;

    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}