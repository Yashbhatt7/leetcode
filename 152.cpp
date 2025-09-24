#include<iostream>
#include<vector>

int maxProduct(std::vector<int>& nums) {
    std::vector<int> dp(nums.size());
    int curBestProd = nums[0];

    dp[0] = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        curBestProd *= nums[i];
        dp[i] = std::max(dp[i - 1], curBestProd);
    }

    return dp[nums.size() - 1];
}

int main() {
    std::vector<int> nums = { 2, -5, -2, -4, 3, 0, -2, -3, 4, -1, 0, 10 };

    std::cout << maxProduct(nums);

    std::cin.get();
}

