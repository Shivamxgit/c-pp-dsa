#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    // Base case: when start >= end
    if(start >= end) return;

    // Swap elements
    swap(arr[start], arr[end]);

    // Recursive call
    reverseArray(arr, start + 1, end - 1);
}

void f(int arr[], int i, int n){
    if( i > n/2) return;

    swap(arr[i], arr[n-i-1]);
    f(arr, i+1, n);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    //reverseArray(arr, 0, n-1);
    f(arr, 0, n);
    // Print reversed array
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    return 0;
}
