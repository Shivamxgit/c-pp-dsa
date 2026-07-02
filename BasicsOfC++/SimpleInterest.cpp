#include <iostream>
using namespace std;
int main (){
    int principle;
    int rate ;
    int time ;
    cout << "enter principle = "<< endl;;
    cin>> principle;
    cout << "enter rate in percentage = "<< endl;;
    cin>> rate;
    cout << "enter time in years  = "<< endl;;
    cin>> time ;
    float SI = (principle*rate*time)/100;
    cout << "the simple interest calculated is = "<< SI << endl;
    return 0;

}