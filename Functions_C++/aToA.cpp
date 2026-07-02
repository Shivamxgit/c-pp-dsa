#include <iostream>
using namespace std;

// char convert (char ch){
//     int ch2 = int(ch)-32;
//     char ch3 = char(ch2);
//     return ch3;
// }
char convert (char ch){
    char ans = ch - 'a' + 'A';
    return ans;
}

int main (){
    char ch;
    cout<< "enter a character: ";
    cin >> ch;
    cout << convert(ch);
    return 0;
}