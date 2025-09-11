#include<iostream>
#include<vector>

int coinChange(std::vector<int>& coins, int amount) {
    int result = amount;
    int max = 0;
    int temp = result;
    int count = 0;

    while (true) {
        for (int i = 0; i < coins.size(); ++i) {
            if (result >= coins[i]) {
                temp -= coins[i];
            }

            if (max < temp) {
                max = temp;
                ++count;
            }
        }

        result -= max;
        temp = result;
        if (result == 0) {
            return count;
        }
    }

    return -1;
}

int main() {
    std::vector<int> coins = { 1, 2, 5 };
    int amount = 11;

    std::cout << coinChange(coins, amount);

    std::cin.get();
}

