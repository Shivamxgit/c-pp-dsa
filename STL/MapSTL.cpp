#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    // Add
    mp[101] = "Shivam";
    mp[103] = "Aman";
    mp.insert({102, "Rahul"});
    mp.emplace(104, "Neha");

    // Access
    cout << mp[101] << endl;
    cout << mp.at(102) << endl;

    // Search
    if (mp.find(103) != mp.end())
        cout << "Found\n";

    // Check existence
    cout << mp.count(104) << endl;

    // Modify
    mp[101] = "Rohan";

    // Erase
    mp.erase(102);

    // Traverse
    for (auto &[key, value] : mp)
        cout << key << " -> " << value << endl;
    // Traverse
    for (auto p : mp){
        cout << p.first << "-->" << p.second  << endl;
    }
    // Size
    cout << "Size: " << mp.size() << endl;

    return 0;
}