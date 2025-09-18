#include<iostream>
#include<vector>

int maxProfit(std::vector<int>& prices) {
    int bestBought = prices[0];
    int totalProfit = 0;

    for (int i = 1; i < prices.size(); ++i) {
        if (bestBought > prices[i]) {
            bestBought = prices[i];
            continue;
        }
        totalProfit += prices[i] - bestBought;
        bestBought = prices[i];
    }

    return totalProfit;
}

int main() {
    std::vector<int> prices = { 7,1,5,3,6,4 };

    std::cout << maxProfit(prices);

    std::cin.get();
}

