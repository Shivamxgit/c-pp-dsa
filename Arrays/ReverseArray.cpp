#include <iostream>
using namespace std;
int main(){

    int Arr1[]= {5,4,3,9,2};
    int n = sizeof(Arr1)/sizeof(int);

    int Arr2[n]={};
    for (int i = n; i>=0; i--){
        Arr2[(n-1)-i]=Arr1[i];
    }

    //for (int i = 0; i<n; i++){
       // cout<< Arr2[i]<<" ";
    //}
    for (int i = 0; i<n; i++){
        Arr1[i]=Arr2[i];
    }
    cout << endl;
    for (int i = 0; i<n; i++){
        cout<< Arr1[i]<<" ";
    }

    return 0;
}