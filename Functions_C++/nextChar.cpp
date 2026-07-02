#include <iostream>
using namespace std;

char nextChar(char ch){
    if (ch == 'z'){
        return 'a';
    }
    else{
        return ch+1;
    }
}

int main (){
    char ch;
    cout << "enter a character = ";
    cin>> ch;
    cout << "the next char is = "<< nextChar(ch);
    return 0;

}
