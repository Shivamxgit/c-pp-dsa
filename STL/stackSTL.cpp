#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    // Add
    st.push(10);
    st.push(20);
    st.push(30);

    // Access top
    cout << st.top() << endl;  // 30

    // Size
    cout << st.size() << endl; // 3

    // Remove top
    st.pop();

    cout << st.top() << endl;  // 20

    // Check empty
    cout << st.empty() << endl; // 0

    // Traverse / remove all
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}