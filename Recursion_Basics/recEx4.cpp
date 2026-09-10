#include <bits/stdc++.h>
using namespace std;

void fun(int n) {
    if (n == 0)        // Base case
        return;
    cout << n << endl;
    fun(n - 1);        // Recursive call
}
int main(){
    int n;
    cin >> n;
    fun(n);
    return 0;
}