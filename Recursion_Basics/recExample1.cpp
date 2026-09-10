#include <bits/stdc++.h>
using namespace std;

void print(){
    cout << 1 << endl;
    print();
}
/*this will cause Stack Overflow because of the infinite recursion , 
 because no condition is met and the function will keep calling itself infinitely*/
int main(){
    print();            
    return 0;
}