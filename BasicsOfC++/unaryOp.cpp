#include <iostream>
using namespace std;
int main (){
    int a = 6;
    int b = ++a;
    int c = a++;

    cout<<b<<endl<<c<<endl<<a;;
    return 0;
}