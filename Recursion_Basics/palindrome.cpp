#include <bits/stdc++.h>
using namespace std;

bool f(string str, int l, int r) {
    if(l >= r) return true;

    if(str[l] != str[r])
        return false;

    return f(str, l+1, r-1);
}

int main() {
    string s;

    cout << "Enter a string: ";
    cin >> s;

    bool result = f(s, 0, s.size()-1);

    cout << "\nString: " << s << endl;

    if(result)
        cout << "Result: The string IS a palindrome.\n";
    else
        cout << "Result: The string is NOT a palindrome.\n";

    return 0;
}