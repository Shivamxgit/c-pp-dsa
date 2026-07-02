#include <iostream>
using namespace std;
int main (){
    // taking input three marks of subjects
    int a,b,c;
    cout<< "enter marks of maths = "<<endl;
    cin>> a;
    cout<< "enter marks of science = "<<endl;
    cin>> b;
    cout<< "enter marks of french = "<<endl;
    cin>> c;
    float avg = (a+b+c)/3;
    cout<<"the avg marks is = "<< avg << endl;

}