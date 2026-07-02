#include <iostream>
#include <cmath>
using namespace std;

int countnum(int num){
    if (num == 0) return 1;
    int count = 0;
    while(num){
        count++;
        num = num/10;
    }
    return count;
}

void armstrong (int num, int count){
    int sum =0;
    int n = num;
    while(n!=0){
        int lastdig = n%10;
        sum = sum + pow(lastdig, count);
        n = n/10;
    }
    if (sum == num){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
int main(){
    int num;
    cout<< "enter a num to be checked:";
    cin>> num;
    int count = countnum(num);
    armstrong(num, count);
    return 0;
}