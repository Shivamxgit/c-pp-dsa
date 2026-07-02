#include <iostream>
using namespace std;

void SumOfDigits(int n ){
    int sum=0;
    while (n>0){
        sum = sum + n%10;
        n = n/10;
    }
    cout << sum << endl;
}
int main(){
    int n;
    cout<< "enter the number = ";
    cin >> n;
    SumOfDigits(n);
    return 0;
}