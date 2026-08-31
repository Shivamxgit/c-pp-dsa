#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "hello";

    cout << s<< endl;
    cout << s[0]<< endl;  // h
    cout << s[2]<<endl;;  // l
    cout << s.size()<<endl;    // 5
    cout << s.length()<<endl;  // 5

    string s1 = "abc";
    s1.push_back('d');
    cout << s1<<endl;
    s.pop_back();
    cout << s1;  // abc
}