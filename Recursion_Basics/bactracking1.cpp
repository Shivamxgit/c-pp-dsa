#include <bits/stdc++.h>
using namespace std;

// print 1->N, using Backtracking
void f(int i, int N){
    if(i<1) return ;
    f(i-1, N);
    cout << i << endl;
}

void generateBin(int n, string current){
    if(current.size() == n){
        cout << current << endl;
        return;
    }

    generateBin(n, current+"0");
    generateBin(n, current+"1");


}
int main(){
    int N;
    cout << "Enter N:";
    cin >> N;

    //f(N,N);
    generateBin(N,"");

    return 0;
}