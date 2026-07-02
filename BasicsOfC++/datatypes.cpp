#include<iostream>
#include <iomanip>
using namespace std;

// here we will learn about data types in c++ 

int main (){
    int age = 32;
    int marks = 78;
    cout<<"the age is = "<<age<<endl;
    cout<<"the size of int is : "<<sizeof(int)<<" bytes"<<endl;

    bool isAdult = true;
    cout<<"adult hai ya nhi 0/1 = "<<isAdult<< endl;
    cout<<"the size of bool is : "<<sizeof(bool)<<" bytes";

    char grade = 'A';
    cout<<"\nthe grade is = "<<grade;
    cout<<"\nthe size of char is : "<<sizeof(char)<<" bytes"<<endl;

    float cgpa = 8.21;
    cout<< "cgpa is = "<<cgpa<<endl;
    cout<<"the size of float is : "<<sizeof(float)<<" bytes"<< endl;
/*in default float and double prints upto 5 decimal places but if we have to increase it we can use "#include <iomanip>" and setprecision(x) method to set their precision but float shows correct precision till 7 digits and double till 15-16 digits*/
    double num = 1.234567891144;
    cout<<setprecision(15) << "num is = " << num << endl ;
    cout<<"the size of double is : "<<sizeof(double)<<" bytes"<< endl;
    return 0;
}