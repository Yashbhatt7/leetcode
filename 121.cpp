#include<iostream>
#include<vector>

int maxProfit(std::vector<int>& prices) {
    int bestProfit = 0;
    int bestBought = prices[0];
    for (int i = 1; i < prices.size(); ++i) {
        if (bestBought > prices[i]) {
            bestBought = prices[i];
            continue;
        }
        bestProfit = std::max(bestProfit, (prices[i] - bestBought));
    }
    return bestProfit;
}

int main() {
    std::vector<int> prices = { 7,1,5,3,6,4 };

    std::cout << maxProfit(prices);

    std::cin.get();
}

