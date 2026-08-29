#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> l = {1,2,3,4};
    l.push_back(5);
    l.push_back(6);
    l.push_front(0);
    list<int> l2;
    l2.push_back(15);
    l2.push_back(16);
    l2.push_front(10);

    //traverse a list
    for(auto x : l){
        cout << x << " ";
    }

    return 0;
}