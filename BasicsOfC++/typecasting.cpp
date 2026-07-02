#include <iostream>
using namespace std;

int main() {
    int num = 10;
    double result;

    result = num; // Implicit typecasting: int -> double
    cout << "The integer value is: " << num << endl;
    cout << "After implicit typecasting to double: " << result << endl;
    cout << result/3<< endl;
    cout << num/3<< endl;
    cout << 'A' - 0 << endl;
    cout << 'c' - 0 << endl;

    // EXPLICIT TYPECASTING 
    float PI = 3.1415;
    cout<< (int)PI<< endl; 
    cout<<((float)10/7)<<endl;
    cout << (char)('A' + 2) << endl;
    return 0;
}