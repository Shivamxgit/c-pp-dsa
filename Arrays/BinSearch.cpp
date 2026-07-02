#include <iostream>
using namespace std;

int BinSearch(int arr[], int n, int key){
    int low = 0;
    int high = n-1;

    while (low<= high){
        int mid = (high + low)/2;
        if (key == arr[mid]){
            return mid;
        }
        if (key < arr[mid]){
            high = mid-1; 
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}
int main(){
    int n = 6;
    int arr[n] = {2,6,9,17,29,32};
    int key = 10;
    cout <<"the key is at the index : "<< BinSearch(arr,n,key);

    return 0;
}