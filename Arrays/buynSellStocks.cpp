#include <iostream>
using namespace std;
int main (){
    int n =6;
    int prices[n] ={7,1,5,3,6,4};
    int maxP = 0;

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            int currP = prices[j] - prices[i];
            maxP = max(currP, maxP);
        }
        
    }
    cout << "Max Profit: " << maxP << endl;
    return 0;
}