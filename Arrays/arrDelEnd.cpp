#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n]= {32,54,76,21,98};
    n = n-1;
    for (int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}