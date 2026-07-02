#include <iostream>
using namespace std ;
int main(){
    int n;
    int arr[n];
    cout << "enter the size of the array= ";
    cin>> n;

    for(int i =0; i < n ;i++){
        cin>> arr[i];
    }
    cout << endl;
    for(int i=0; i<n;i++){
        cout << arr[i] << ",";
    }
    return 0;
}