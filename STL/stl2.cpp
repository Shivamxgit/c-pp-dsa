#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "First: " << v.front() << endl;
    cout << "Last: " << v.back() << endl;

    cout << "Elements: ";

    for(int x : v) {
        cout << x << " ";
    }

    cout << endl;

    v.pop_back();

    cout << "After pop_back: ";

    for(int x : v) {
        cout << x << " ";
    }

    return 0;
}