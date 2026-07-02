#include <iostream>
using namespace std;
int main(){
    int *ptr =NULL;
    int *ptr2 = nullptr;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;

    cout<<*ptr<<endl; // segmentation fault
    cout << "hello";
    return 0;
}