#include <iostream>   // library for input/output functions
#include <math.h>     // library for higher mathematical functions
#include <string>     // library for using strings and their functions
#include <bits/stdc++.h> // import all the libraries in c++

using namespace std;

int main() {
    //cout << "my name is Shivam." << "\n";
    //cout << "I am 21 only." << endl;

    //int x;
    //cin >> x;
    //cout << "The value of x is = " << x;

    // string and getline
    //string s1, s2;
    //cin >> s1 >> s2;
    //cout << s1 << " " << s2 << endl;

    //string str;
    
    //getline(cin, str);         
    //cout << str << endl;
    //int age;
    //cout<< "Enter your age: ";
    //cin>> age;
    //if(age<18){
      //  cout<<"you are not an adult!!";
    //}
    //else{
      //  cout<<"You are an Adult";
    //}
    //int age;
    //cout<<"enter age:";
    //cin>>age;
    //if(age<18){
      //  cout<<"not eligible for job";
    //}
    //else if(age<=57){
     //   cout<<"eligible for job";
       // if(age>=55){
        //    cout<<", but retirement soon.";
       // }
    //}
    //else{
      //  cout<<"retirement time !!!!!!!";
    //}
    int day;
    cin>>day;
    switch(day){
        case 1:
            cout<<"Mon";
            break;
        case 2:
             cout<<"Tues";
            break;
        case 3:
             cout<<"Wed";
            break;
        case 4:
             cout<<"thurs";
            break;

        case 5:
            cout<<"fri";
            break;

        case 6:
            cout<<"sat";
            break;

        case 7:
            cout<<"sun";
            break;
        default:
            cout<<"invalid";
    }
    return 0;
}