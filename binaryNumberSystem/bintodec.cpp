#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int bin = 101;
    int p,q,i;
    q=0;
    i = 0;
        while(bin>0){
        p = bin%10;
        q = q + p* pow(2,i);
        bin = bin/10;
        i++;
    }
    cout << q << endl;
    return 0;
}
