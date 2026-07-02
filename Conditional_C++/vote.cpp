#include <iostream>
using namespace std ;
int main(){
    int age;
    cout<<"Enter your age = ";
    cin>>age;
    cout<<endl;
    if(age>=18){
        cout<<"eligible to vote."<<endl;
    }
    if(age>=45){
        cout<<"can contest for elections"<<endl;
    }
    if(age<18){
        cout<<"can't vote.";
    }

    return 0;
}