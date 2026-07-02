#include <iostream>
using namespace std;

int main() {
    bool condition1 = true;
    bool condition2 = false;

    // Using AND (&&) operator
    if (condition1 && condition2) {
        cout << "Both conditions are true." << endl;
    } else {
        cout << "At least one condition is false." << endl;
    }

    // Using OR (||) operator
    if (condition1 || condition2) {
        cout << "At least one condition is true." << endl;
    } else {
        cout << "Both conditions are false." << endl;
    }

    // Using NOT (!) operator
    if (!condition2) {
        cout << "Condition2 is false, so NOT operator makes it true." << endl;
    }

    return 0;
}