
#include <bits/stdc++.h>
using namespace std;
//printing elements of array
void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

// reversing an array using recursion

int main()
{
    //cout<<"Hello World";
    int n = 10;
    int arr[n] = {1,3,5,7,9,11,13,15,17,19};
    int *left = arr;
    int *right = &arr[n-1];
    
    for(int i = 0; i<n/2; i++){
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
    print(arr, n);

    return 0;
}