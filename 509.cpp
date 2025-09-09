#include<iostream>
#include<vector>

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    std::vector<int> dp(n + 1);

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i < n + 1; ++i) {
        dp[i] = dp[i - 2] + dp[i - 1];
    }

    return dp[n];
}

int main() {
    int n = 4;

    std::cout << fib(n);

    std::cin.get();
}

