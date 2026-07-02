//WAPtoinputanumberandcheckwhetherthenumberisanArmstrongnumberornot
#include <iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"Enter a number = ";
    cin>>n;
    num=n;
    int rem,res=0;
    while(n>0){
        rem=n%10;
        res = res + (rem*rem*rem);
        n= n/10;
    }
    if(num==res){
        cout<<"ARMSTRONG";
    }
    else{
        cout<<"NOT ARMSTRONG";
    }
    return 0;
}
