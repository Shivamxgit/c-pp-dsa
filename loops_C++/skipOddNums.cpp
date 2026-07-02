#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 28; i++) {
        if (i % 2 != 0) {
            continue; // Skips odd numbers
        }
        cout << i << " ";
    }
    return 0;
}