#include <iostream>
using namespace std;

void func (int a[5]){
    a[0]=103;

}
int main(){
    int arr[5] ={10,143,154,123,23};
    cout << arr[0]<< endl;
    func(arr);
    cout << arr[0];
    return 0;
}