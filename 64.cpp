#include<iostream>
#include<vector>

#define INT_MAX 993452342

// My First 2D DP Problem
int minPathSum(std::vector<std::vector<int>>& grid) {
    int r = grid.size();
    int c = grid[0].size();

    std::vector<std::vector<int>> dp(r, std::vector<int>(c, 0));

    dp[0][0] = grid[0][0];
    for (int i = 1; i < grid[0].size(); ++i) {
        dp[0][i] = dp[0][i - 1] + grid[0][i];
    }

    for (int i = 1; i < grid.size(); ++i) {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }

    for (int i = 1; i < grid.size(); ++i) {
        for (int j = 1; j < grid[0].size(); ++j) {
            dp[i][j] = grid[i][j] + std::min(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    return dp[r - 1][c - 1];
}

int main() {
    std::vector<std::vector<int>> grid = {
        { 1,3,1 },
        { 1,5,1 },
        { 4,2,1 },
    };

    std::cout << minPathSum(grid);

    std::cin.get();
}

