#include <iostream>
using namespace std;

void ChangeA(int a){
    a = 36;
    cout << a<< "\n";
}


int main(){
    int a = 29;
    ChangeA(a);
    cout << a << endl;
    return 0;
}