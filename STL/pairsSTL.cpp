#include <bits/stdc++.h>
using namespace std;

int main() {
    // Create
    pair<int, string> p = {10, "Hello"};

    // Access
    cout << p.first << endl;
    cout << p.second << endl;

    // Modify
    p.first = 20;
    p.second = "World";

    // make_pair
    auto q = make_pair(5, 6);

    // Vector of pairs
    vector<pair<int, int>> v = {
        {3, 30},
        {1, 10},
        {2, 20}
    };

    // Add pair
    v.push_back({4, 40});

    // Access
    cout << v[0].first << " ";
    cout << v[0].second << endl;

    // Sort pairs
    sort(v.begin(), v.end());

    // Traverse
    for (auto [x, y] : v)
        cout << x << " " << y << endl;

    return 0;
}