#include <iostream> // insert at beginning
using namespace std;
int main(){
    int n = 5;
    int arr[n]= {4,6,8,9,11};
    int val = 5;
    for (int i = n-1; i >= 0; i--){
        arr[i+1]= arr[i];
    }

    arr[0]= val;
    n++;
    cout << arr[0] << endl;
    for (int i = 0; i <n; i++){
        cout << arr[i]<< " ";
    }
    return 0;

}