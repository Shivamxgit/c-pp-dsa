#include <iostream>
using namespace std;

void maxProfit(int prices[], int n){
    int bestBuy[100];
    bestBuy[0]= INT_MAX;
    for(int i = 1; i<n; i++){
        bestBuy[i]= min(bestBuy[i-1], prices[i-1]);
        //cout << bestBuy[i] << " ,";
    }
    cout << endl;

    int maxP = 0;
    for(int i = 0; i<n; i++){
        int currP = prices[i]-bestBuy[i];
        maxP = max(currP,maxP);
    }
    cout << "Max Profit: " << maxP << endl;
    

} 



int main (){
    int n =6;
    int prices[n] ={7,1,5,3,6,4};
    maxProfit(prices, n);
    return 0;
}

/*Here is the step-by-step logic for the code you just wrote:

Initialize an Auxiliary Array: Create an array called bestBuy to store the lowest possible buying price available before any given day. Set bestBuy[0] to INT_MAX since there is no "yesterday" on the very first day.

Pre-compute the Minimums (First Loop): Loop from index 1 to n-1. For each day i, determine the lowest past price by taking the minimum of bestBuy[i-1] and prices[i-1]. Store this in bestBuy[i].

Initialize Profit Tracker: Create a maxP variable and set it to 0.

Calculate Maximum Profit (Second Loop): Loop from index 0 to n-1. For each day, calculate the potential profit if you sold today: prices[i] - bestBuy[i].

Update and Compare: If this potential profit is higher than maxP, update maxP.

Output: Print maxP after the loop finishes.*/