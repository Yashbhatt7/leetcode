#include<iostream>
#include<vector>

#define INT_MAX 2147483647

int coinChange(std::vector<int>& coins, int amount) {
    if (amount == 0) return 0;

    std::vector<int> dp(amount + 1, INT_MAX);

    dp[0] = 0;

    int a = amount;
    for (int i = 1; i <= amount; ++i) {
        for (int j = 0; j < coins.size(); ++j) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
                dp[i] = std::min(dp[i - coins[j]] + 1, dp[i]);
            }
        }
    }

    if (dp[amount] == INT_MAX) {
        return -1;
    }

    return dp[amount];
}

int main() {
    std::vector<int> coins = { 1, 2, 5 };
    int amount = 11;

    std::cout << coinChange(coins, amount);

    std::cin.get();
}

