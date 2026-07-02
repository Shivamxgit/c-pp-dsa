#include <iostream>
using namespace std;

int buyAndSellStock(int prices[], int n) {
    int minPrice = INT_MAX; // Start infinitely high so the first price is always lower
    int maxP = 0;           

    for (int i = 0; i < n; i++) {
        // Step 1: Update the lowest price seen so far
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } 
        // Step 2: If today isn't a new low, check the profit if we sold today
        else {
            int currentProfit = prices[i] - minPrice;
            maxP = max(maxP, currentProfit); // Keep the highest profit
        }
    }
    
    return maxP;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    
    cout << "Max Profit: " << buyAndSellStock(prices, n) << endl;
    
    return 0;
}