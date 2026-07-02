//reversing an array without uing any extra space ...
#include <iostream>
using namespace std;
int main(){
    int arr[]={14,16,18,20,21,22,23};
    int n = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = n-1;

    cout << "the orignal array is : ";
    for(int i = 0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<".";
    cout << endl;
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    cout << "the reversed array is : ";
    for(int i = 0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<".";
    return 0;
}