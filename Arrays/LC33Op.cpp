#include <iostream>
using namespace std;

int search(int nums[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents overflow

        if (nums[mid] == target) {
            return mid;
        }

        // STEP 1: Identify which half is sorted
        if (nums[low] <= nums[mid]) {
            // Left half [low...mid] is sorted
            
            // STEP 2: Check if target is within this sorted left half
            if (nums[low] <= target && target < nums[mid]) {
                high = mid - 1; // Target is in the left, throw away right
            } else {
                low = mid + 1;  // Target is in the right, throw away left
            }
        } 
        else {
            // Right half [mid...high] is sorted
            
            // STEP 3: Check if target is within this sorted right half
            if (nums[mid] < target && target <= nums[high]) {
                low = mid + 1;  // Target is in the right, throw away left
            } else {
                high = mid - 1; // Target is in the left, throw away right
            }
        }
    }

    return -1; // Target not found
}

int main() {
    int nums[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;
    int target = 0;

    int result = search(nums, n, target);

    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not present in the array." << endl;
    }

    return 0;
}