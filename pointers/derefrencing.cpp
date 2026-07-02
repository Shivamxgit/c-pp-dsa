// Dereferencing means accessing the value stored at the address
#include <iostream>
using namespace std;
int main(){
    int a = 25;
    int *ptr = &a;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << a << endl;

    // dereferencing operator can also be used to modify the value of the variable

    *ptr = 1005;
    cout << a << endl;
    return 0;
}