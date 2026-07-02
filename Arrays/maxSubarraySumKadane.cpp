#include <iostream>
using namespace std;

void maxSubarraySumKadane(int arr[], int n) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];          // Add current element
        maxSum = max(maxSum, currentSum); // Update max if needed

        if (currentSum < 0) {
            currentSum = 0;            // Drop negative baggage
        }
    }
    
    cout << "Max subarray sum is: " << maxSum << endl;   
}

int main () {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    maxSubarraySumKadane(arr, n);
    return 0;
}