#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> pq;

    // Insert
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(50);

    // Highest priority
    cout << pq.top() << endl;   // 50

    // Remove highest priority
    pq.pop();

    cout << pq.top() << endl;   // 30

    // Size
    cout << pq.size() << endl;  // 3

    // Check empty
    cout << pq.empty() << endl; // 0

    // Process all elements
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
// Min-Heap of Pairs:

/*priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;*/