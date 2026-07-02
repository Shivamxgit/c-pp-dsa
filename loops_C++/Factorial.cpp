//WAP to find the Factorial of a number entered by the user.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    long long int fact=1;
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }

    for(int i=n;i>0;i--){
        fact=fact *i;
    }
    cout<<"the factorial of "<<n<<" is = "<<fact<<endl;
    return 0;
}