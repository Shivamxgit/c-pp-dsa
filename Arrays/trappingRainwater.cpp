#include <iostream>
using namespace std;

void trapRainWater(int height[], int n) {
    if (n <= 2) {
        cout << "Total water trapped: 0" << endl;
        return;
    }

    // 1. Pre-compute Left Max Boundary
    int leftMax[n];
    leftMax[0] = height[0];
    cout << leftMax[0]<< ",";
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i-1]);
        cout << leftMax[i]<< ",";
    }
    cout << endl;

    // 2. Pre-compute Right Max Boundary
    int rightMax[n];
    rightMax[n - 1] = height[n-1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i+1]);
        cout << rightMax[i]<< ",";
    }
    cout << rightMax[n-1]<< ",";
    cout << endl;
    // 3. Calculate Total Water
    int totalWater = 0;
    for (int i = 0; i < n; i++) {
        int currWater = min(leftMax[i], rightMax[i])- height[i];
        if(currWater>0){
            totalWater += currWater;
        }
    }

    cout << "Total water trapped: " << totalWater << endl;
}

int main() {
    int height[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(height[0]);
    
    trapRainWater(height, n);
    
    return 0;
}