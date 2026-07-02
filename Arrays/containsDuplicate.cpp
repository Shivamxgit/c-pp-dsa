#include <iostream>
using namespace std;

int main() {
    int arr[6] = {2, 3, 4, 1, 5, 2};
    int n = 6;
    bool hasDuplicate = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                hasDuplicate = true;
                break; // Stop looking in the inner loop
            }
        }
        if (hasDuplicate) break; // Stop looking in the outer loop
    }

    if (hasDuplicate) {
        cout << "Contains Duplicate: Yes" << endl;
    } else {
        cout << "Contains Duplicate: No" << endl;
    }

    return 0;
}