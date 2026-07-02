#include <iostream>
using namespace std;
int main(){

    //cout << sizeof(int) << endl;
    int marks[] = {1,2,3,4};
    cout << marks[2]<< endl; // accessing elements through index
    cout<<marks[1]<<endl;
    cout << marks[21]<< endl;
    cout << marks[19]<< endl;

    cout << sizeof(marks)/ sizeof(int   );
    

    return 0;
}