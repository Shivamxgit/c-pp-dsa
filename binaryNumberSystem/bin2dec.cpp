#include <iostream>
using namespace std;

void binToDec(int bin){
    int n = bin;
    int dec =0;
    int pow=1;
    while(n>0){
        int lastDig = n%10;
        dec = dec + lastDig*pow;
        n= n/10;
        pow= 2*pow;
    }
    cout<< dec << endl;
}
int main (){
    binToDec(101);
    return 0;
}