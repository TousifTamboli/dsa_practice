#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int stockPrediction(vector<int>& prices) {
    if (prices.empty()) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 0; i < prices.size(); ++i) {
        
        minPrice = min(minPrice, prices[i]);
        
        int profit = prices[i] - minPrice;
       
        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int maxProfit = stockPrediction(prices);

    cout << "Max profit is: " << maxProfit << endl;

    return 0;
}
