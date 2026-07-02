#include <iostream>
using namespace std;
int main(){
    int a[5]= {47,87,98,90,67};
    int *q =a;
    cout << q << endl;
    cout << a << endl;
    cout << a[0] <<"="<<*a << endl;
    cout << *q << endl;
    cout << *(q+1) << endl;
    cout << a[1] << endl;

    return 0;
}