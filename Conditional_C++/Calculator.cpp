#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout <<"enter value of a: "<<endl;
    cin>>a;
    cout <<"enter value of b: "<<endl;
    cin>>b;
    cout<<"enter operator: ";
    cin>>op;

    switch (op)
    {
    case '+': cout<<"a+b is = "<<a+b<<endl;
        break;
        case '-': cout<<"a-b is = "<<a-b<<endl;
        break;
        case '*': cout<<"a*b is = "<<a*b<<endl;
        break;
        case '/': cout<<"a/b is = "<<(a/b)<<endl;
        break;
    
    default: cout<<"invalid op"<<endl;
        break;
    }


    return 0;
}