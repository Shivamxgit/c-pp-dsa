#include <iostream>
using namespace std;
int main (){
    int size;
    cout << "enter size of array- ";
    cin >> size;
    int arr[size];
    for (int i = 0; i <size; i++){
        cin >> arr[i];
    }
    cout << endl ;
    cout << "Array is : ";
    for (int i = 0; i <size; i++){
        cout<< arr[i]<<" ";
    }
    cout << endl ;
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < size; i++){
        if (arr[i]> max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout << "max is :"<<max<< endl;
    cout << "min is :"<<min<< endl;

    return 0;
}