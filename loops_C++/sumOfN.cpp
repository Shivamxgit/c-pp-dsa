#include <iostream>
using namespace std;
int main (){
    int N,sum=0;
    cout <<"Enter a number = ";
    cin>> N;
    cout<<endl;
    for(int i=1;i<=N;i++){
        sum = sum + i;     
    }
    cout<<"the sum is = "<< sum << endl;
    return 0;
} // n(n+1)/2 = sum of n natural numbers 
