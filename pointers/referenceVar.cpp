//Call by Reference Using Reference Variables
//A reference variable is an alias (another name) for an existing variable.

#include <iostream>
using namespace std;

void change(int &ref) {
    ref = 10;
    cout << ref << endl;
}

int main() {
    int a = 5;
    change(a);
    cout << a;
    return 0;
}
