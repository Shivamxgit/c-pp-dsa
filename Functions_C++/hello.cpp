#include <iostream>
using namespace std;

void sayHello(){
    cout<<"Hello :-)"<<endl;
}

void assistant(){
    sayHello();
    cout<<"I am your Assistant.";
}
int main(){
    assistant();
    return 0;
}