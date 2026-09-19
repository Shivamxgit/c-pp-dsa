#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int i , int n){
    // Base case: if we reached the last element
    if(i >= n-1) return true;

    // If current element > next → not sorted
    if(arr[i] > arr[i+1]) return false;

    // Recursive check for rest of array
    return isSorted(arr, i+1, n);
}

int main(){
    int n;
    int arr[] = {2,4,63,8,11,13};
    n = sizeof(arr)/sizeof(arr[0]);

    // print arr
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << isSorted(arr, 0, n);
    return 0;
}
