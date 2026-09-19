#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,3,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num;
    cout << "Enter number to be searched: ";
    cin >> num;

    int index = -1; // default if not found
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            index = i;   // first occurrence
            break;       // stop after first match
        }
    }

    cout << index; // prints index or -1
    return 0;
}
