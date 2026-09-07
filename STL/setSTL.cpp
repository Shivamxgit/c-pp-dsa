#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(10);   // duplicate, ignored
    s.insert(20);
    
    set<int> s2 = {10, 20, 30, 40};

    s2.insert(25);

    s2.erase(20);

    cout << s2.size()<< endl;       // 4

    if(s2.find(30) != s2.end())
        cout << "Found" << endl;

    if(s2.count(50))
        cout << "Exists";

    for(int x : s2)
        cout << x << " ";
}
