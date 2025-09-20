#include<iostream>
#include<vector>

int numberOfArithmeticSlices(std::vector<int>& nums) {
    int dp = 0;
    int count = 0;
    for (int i = 2; i < nums.size(); ++i) {
        if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]) {
            dp = dp + 1;
            count += dp;
        } else {
            dp = 0;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = { 1,2,3,4,5,6 };
    // std::vector<int> nums = { 1,2,3,8,9,10 };
    // std::vector<int> nums = { 1, 2, 3, 4 };

    std::cout << numberOfArithmeticSlices(nums);

    std::cin.get();
}

