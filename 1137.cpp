#include<iostream>
#include<vector>

int tribonacci(int n) {
    std::vector<long long> dp(38);

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;

    for (size_t i = 3; i <= n; ++i) {
        dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
    }

    return dp[n];
}

int main() {
    int n = 4;

    std::cout << tribonacci(n);

    std::cin.get();
}

