#include <iostream>
using namespace std;
int main(){
    int arr[7]={4,5,6,7,0,1,2};
    int n = 7;
    int target = 2;
    int k=-1;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            k = i;
            break;
        }  
    }
    cout << endl;
    cout << "Index at which array is rotaed(k) ="<< k<< endl;
    if(target<= arr[k] && target >= arr[0]){

    int high =k;
    int low = 0;
    while(low<high){
        int mid = (low+high)/2;
        if(target == arr[mid]){
            cout << "taregt found at index:"<< mid ;
        }
        if(target<arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    }

    else if(target<= arr[n-1] && target >= arr[k+1]){
    int high =n-1;
    int low = k+1;
    while(low<=high){
        int mid = (low+high)/2;
        if(target == arr[mid]){
            cout << "taregt found at index:"<< mid ;
        }
        if(target<arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    }
    else{
        cout << "Target is not present in the array!!!"<< endl;
    }
    return 0;
}