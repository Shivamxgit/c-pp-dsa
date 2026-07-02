#include <iostream>
using namespace std;

void func (int nums[], int n){
for (int i =0;i <n; i++){
    cout << nums[i]<< " ";
}


}
int main(){
    int arr[] ={10,143,154,123,23};
    int n = sizeof(arr)/ sizeof(int);
    func(arr, 5);
    return 0;
}