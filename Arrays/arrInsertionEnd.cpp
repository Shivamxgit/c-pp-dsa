#include <iostream> // insert at end    
using namespace std;
int main(){
    int n = 5;
    int arr[n]= {4,6,8,9,11};
    int val = 5;

    arr[n]= val;
    n++;
    cout << arr[0] << endl;
    for (int i = 0; i <n; i++){
        cout << arr[i]<< " ";
    }
    return 0;

}