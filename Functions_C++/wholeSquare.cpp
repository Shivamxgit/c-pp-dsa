//Write a function which takes 2 numbers as parameters (a&b) and outputs: a^2+b^2+2*ab

#include <iostream>
using namespace std;

void wholeSquare(int a, int b){
    int result = (a*a + 2*a*b + b*b);
    cout << "Result of (a + b)^2 = " << result << endl;

}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    wholeSquare(a,b);
    return 0;
}