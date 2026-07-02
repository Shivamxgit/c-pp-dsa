#include <iostream>
using namespace std;

int product(int a, int b = 1){
    int prod = a*b;
    return prod;
}

void isEven (int a){
    if (a%2==0){
        cout<< "even"<< endl;
    }
    else{
        cout<< "odd"<< endl;
    }
}
int main (){
    cout<<"hello"<<endl;
    cout << product (5,3)<< endl;
    cout << product (5)<< endl;
    isEven(5);

    return 0;
}