#include <iostream>
using namespace std;
int main (){
    int n;
    int arr[n]= {4,5,4,3,1,3,1}; // ans = 5
    n = sizeof(arr)/sizeof(int);
    int ans = 0;
    for (int i = 0; i < n ; i++){
        ans = ans^arr[i]; //XOR
    }

    cout << "the unique occurence is of elemrnt: "<< ans << endl;
    return 0;
}