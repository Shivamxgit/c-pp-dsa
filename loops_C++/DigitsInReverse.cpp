#include <iostream>
using namespace std;
int main(){
    int n= 10829;
    int rem;
    while(n>0){
        rem = n%10;
        n= n/10 ;
        cout<<rem<<" "; // Print the remainder (last digit) followed by a space
    }
    
    return 0;
}
