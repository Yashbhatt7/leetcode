#include<iostream>
#include<vector>

#define INT_MAX 924092437

int minimumTotal(std::vector<std::vector<int>>& triangle) {
    std::vector<int> dp = triangle.back();

    for (int i = triangle.size() - 2; i >= 0; --i) {
        for (int j = 0; j < triangle[i].size(); ++j) {
            dp[j] = triangle[i][j] + std::min(dp[j], dp[j + 1]);
        }
    }

    return dp[0];
}

int main() {
    std::vector<std::vector<int>> triangle = {
        { 2 },
        { 3,4 },
        { 6,5,7 },
        { 4,1,8,3 }
    };

    // std::vector<std::vector<int>> triangle = {
    //     { -1 },
    //     { 2,3 },
    //     { 1,-1,-3 },
    // };

    std::cout << minimumTotal(triangle);

    std::cin.get();
}

