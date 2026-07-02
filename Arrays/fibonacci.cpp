// finding nth element of fibonacci series using array 
#include <iostream>
using namespace std;
int main (){
    int n = 7;
    int arr[n-1]= {0,1,};
    int i=2;
    while (i<n){
        arr[i] = arr[i-1]+arr[i-2];
        i++;
    }
    cout << arr[n-1];
    return 0;
}