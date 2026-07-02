// Linear Search in Array 

#include <iostream>
using namespace std;

int linsearch(int *arr, int size, int key){
    for (int i = 0; i < size; i++){
        if (arr[i]== key){
            return i;
        }
    }
    return -1;
}
int main (){

    int arr[]= {12,23,34,45,56,67,78,89,90};
    int n = sizeof(arr)/sizeof(int);
    //int key = 67;
    int pos = linsearch(arr,n,13);
    cout << endl<< "the index of key "  << " is = "<<pos << endl;
    return 0;
}