#include <iostream>
using namespace std;

int factorial (int n ){
    int fact=n;
    if (n==0 || n==1){
        fact = 1;
    }
    
    for(int i = n-1; i>=1; i--){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int n ;
    cout<< "enter the value of n = ";
    cin>> n;
    cout<< factorial(n)<< endl;
    return 0;
}