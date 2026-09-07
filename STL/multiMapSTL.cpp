#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> mp;

    mp.insert({1, "Shivam"});
    mp.insert({2, "Rahul"});
    mp.insert({1, "Aman"});    // duplicate key allowed

    for (auto &[key, value] : mp)
        cout << key << " -> " << value << endl;
    
    auto range = mp.equal_range(1);

    for (auto it = range.first; it != range.second; ++it)
        cout << it->second << " ";
}