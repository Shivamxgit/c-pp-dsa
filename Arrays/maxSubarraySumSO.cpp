#include <iostream>
using namespace std;

void maxSubarraySum(int arr[], int n ){
    int maxSum = INT_MIN;
    for(int start=0;start<n;start++){
        int sum = 0;
        for(int end=start;end<n;end++){
            
            sum = sum + arr[end];
            maxSum = max(maxSum, sum);
        }    
    }
    cout <<"max subarray sum is : "<< maxSum << endl;   
}

int main (){
    int n = 6;
    int arr[n]= {2,-3,6,-5,4,2};
    maxSubarraySum(arr,6);
    return 0;
}