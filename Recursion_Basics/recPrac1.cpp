#include <bits/stdc++.h>
using namespace std;

string name = "Shivam";
void printName(int n){
    if(n == 0) return;   // stop when n reaches 0
    cout << name << endl;
    printName(n - 1);
}
void printName2(int i, int N){
    if(i>N) return;
    cout << name << endl;
    printName2(i+1,N);
}
void printNums(int num , int N){
    if(num > N) return;
    cout << num << " ";
    printNums(num + 1, N);
}



int main(){
    //printName(5);
    int n;
    cout << "Enter n: ";
    cin >> n;
    //printName2(1,n);

    printNums(1,n);
    

    return 0;
}