//WAP where user can keep entering till they enter a multiple of 10
#include <iostream>
using namespace std;
int main(){
    int n;
    do{
        cin>>n;
        if(n%10==0){
            break;
        }
    }while(true);
    cout<<endl<<n<<" is a multiple of 10 so loop breaks.."<<endl;
    return 0;
}