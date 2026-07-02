#include <iostream>
using namespace std;
int main(){
    int a = 23443;
    int* ptr = &a;
    cout << &a << " = "<< ptr <<endl;
    float pi = 3.1415;
    float* ptr2 = &pi;
    cout << &pi << " = "<< ptr2 <<endl;

    cout << sizeof(ptr)<< ", "<< sizeof(ptr2) <<endl;

    return 0;
}