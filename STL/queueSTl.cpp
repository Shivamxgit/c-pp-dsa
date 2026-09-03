#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Add
    q.push(10);
    q.push(20);
    q.push(30);

    // Access
    cout << q.front() << endl;  // 10
    cout << q.back() << endl;   // 30

    // Size
    cout << q.size() << endl;   // 3

    // Remove
    q.pop();

    cout << q.front() << endl;  // 20

    // Check empty
    cout << q.empty() << endl;  // 0

    // Remove and traverse
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}