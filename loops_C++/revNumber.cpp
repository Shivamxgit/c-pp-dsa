#include <iostream>
using namespace std;
int main(){
    int rem;
    int result=0;
    int num = 9832;
    while(num>0){
        rem = num%10;
        result = result*10 + rem;
        num = num/10;
    }
    cout << result;
    return 0;
}