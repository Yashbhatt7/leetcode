#include<iostream>
#include<vector>

int rob(std::vector<int>& nums) {
    if (nums.size() < 1) return 0;
    if (nums.size() == 1) return nums[0];

    int n = nums.size();
    std::vector<int> dp(n, 0);

    dp[0] = nums[0];
    dp[1] = std::max(nums[0], nums[1]);

    for (int i = 2; i < n; ++i) {
        dp[i] = std::max(dp[i - 1], dp[i - 2] + nums[i]);
    }

    return dp[n - 1];
}

int main() {
    std::vector<int> nums = { 1,2,3,1 };

    std::cout << rob(nums);

    std::cin.get();
}

