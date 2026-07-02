#include <iostream>
using namespace std;
int main(){
    int n= 10829;
    int rem, sum=0;
    while(n>0){
        rem = n%10;
        sum= sum+rem;
        n= n/10 ;
    }
    cout<<sum;
    return 0;
}
