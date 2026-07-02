#include <iostream>
using namespace std ;
int main(){
    int n = 5;
    int arr[n]={43,56,91,12,9};
    int max =arr[0];
    cout << endl;
    for(int i=1; i<n;i++){
        if(arr[i]>max){
            max =arr[i];
        }
    }
    cout << "the max element is = "<< max;
    return 0;
}