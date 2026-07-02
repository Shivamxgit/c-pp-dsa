#include <iostream>
using namespace std;

int factorial (int n ){
    int fact =1 ;
    for (int i= 1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int binCoeff(int n, int r){
    int value = (factorial(n))/(factorial(r))*(factorial(n-r));
    return value;
}
   
int main(){
    int n,r;
    cout << "enter the value of n & r= ";
    cin>> n>> r;
    cout << endl;
    cout << "the binomial coefficient is = "<<binCoeff(n,r) << endl;

    return 0;
}