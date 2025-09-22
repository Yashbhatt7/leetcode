#include<iostream>
#include<vector>

#define INT_MAX 949323452

int jump(std::vector<int>& nums) {
    std::vector<int> dp(nums.size() + 1, INT_MAX);

    dp[0] = 0;

    for (int i = 0; i < nums.size(); ++i) {
        for (int j = 1; j <= nums[i]; ++j) {
            if (i + j < nums.size()) {
                dp[i + j] = std::min(dp[i + j], dp[i] + 1);
            }
        }
    }

    return dp[nums.size() - 1];
}

int main() {
    std::vector<int> nums = { 2,3,1,1,4 };

    std::cout << jump(nums);

    std::cin.get();
}

