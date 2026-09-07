#include <bits/stdc++.h>
using namespace std;

int main (){
    vector<int> v = {1, 2, 3};

    next_permutation(v.begin(), v.end());
    sort(v.begin(), v.end());

    do {
        for(int x : v)
            cout << x << " ";
        cout << "\n";
    } while(next_permutation(v.begin(), v.end()));
    return 0;
}