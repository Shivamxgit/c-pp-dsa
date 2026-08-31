#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {10, 20, 30};

    // Add elements
    dq.push_front(5);      // 5 10 20 30
    dq.push_back(40);      // 5 10 20 30 40

    // Access
    cout << dq.front() << endl;  // 5
    cout << dq.back() << endl;   // 40
    cout << dq[2] << endl;       // 20
    cout << dq.at(1) << endl;    // 10

    // Remove
    dq.pop_front();        // removes 5
    dq.pop_back();         // removes 40

    // Size
    cout << dq.size() << endl;

    // Check empty
    cout << dq.empty() << endl;  // 0 = not empty

    // Insert
    dq.insert(dq.begin() + 1, 15);

    // Erase
    dq.erase(dq.begin() + 1);

    // Traverse
    for (int x : dq)
        cout << x << " ";

    // Clear
    dq.clear();

    return 0;
}