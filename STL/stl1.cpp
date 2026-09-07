#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(85);
v.push_back(52);
v.push_back(60);

cout << v.size() << endl;
cout << v.capacity()<< endl;


for (int i : v){
    cout << i << " ";
}
cout << endl;

v.pop_back();
cout << v.back()<< endl;;
cout << v.front()<< endl;

if(v.empty()) {
    cout << "Empty";
}
vector<int> vec = {10, 20, 30, 40};

vec.erase(vec.begin());
for(int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
}
cout << endl;
vector<int> v1 = {5,7,8,32,41,47,12};
vector<int> a = {1, 2};
vector<int> b = {3, 4};

cout << "Before swap, a: ";
for (int i : a) cout << i << " ";
cout << endl;

cout << "Before swap, b: ";
for (int i : b) cout << i << " ";
cout << endl;

swap(a, b);

cout << "After swap, a: ";
for (int i : a) cout << i << " ";
cout << endl;

cout << "After swap, b: ";
for (int i : b) cout << i << " ";
cout << endl;


v1.erase(v1.begin() + 1);
v1.erase(v1.begin() + 1, v1.begin()+4);
for(int i = 0; i < v1.size(); i++) {
    cout << v1[i] << " ";
}

    return 0;
}