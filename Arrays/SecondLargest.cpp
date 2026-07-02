#include <iostream>
using namespace std ;
int main (){
    int arr[7] = {2,11,5,3,9,11,2};
    int n = 7; 
    int largest = INT_MIN;
    int second = INT_MIN;
    for(int i = 0; i <n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    for (int i = 0; i<n; i++){
        if (arr[i]!= largest){
            second = max(arr[i], second);
        }
    }
    cout << "the second largest elemnt is :"<< second << endl; 
    return 0;
}