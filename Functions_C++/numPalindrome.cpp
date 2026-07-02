#include <iostream>
using namespace std;

int revNumber(int n){
    int rem,result;
    result = 0;
    
    while(n>0){
        rem = n%10;
        result = result*10 + rem;
        n = n/10;
    }
    return result;
}    
bool checkPalindrome(int n) {
    return n == revNumber(n);
}



int main() {
    int n;
    cout << "Enter a number = ";
    cin >> n;
    if (checkPalindrome(n)) {
        cout << n << " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }
    return 0;
}
