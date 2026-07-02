#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    // Shift elements left (delete first element)
    for (int i = 1; i < n; i++) {
        arr[i-1] = arr[i];
    }

    n = n - 1; // Reduce size

    // Print updated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}