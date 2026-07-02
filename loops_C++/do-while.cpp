#include <iostream>
using namespace std ;
int main(){
    int i=1;
    int n= 3;
    do{
        cout<<n<<"X"<<i<<"="<<" ";
        cout<<n*i<<endl;
        i++;
    }while(i<11);
    return 0;
}