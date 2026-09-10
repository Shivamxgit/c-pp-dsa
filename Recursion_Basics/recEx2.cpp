#include <bits/stdc++.h>
using namespace std;

int fun(int n) {
    if (n == 0)        // Base case
        return 0;
    return n + fun(n - 1);   // Example: sum of numbers
}
int main(){
    int n;
    cin >> n;
    cout << fun(n) << endl;            
    return 0;
}