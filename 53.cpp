#include<iostream>
#include<vector>

int maxSubArray(std::vector<int>& nums) {
    int maxSum = nums[0];
    int curBestSum = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        curBestSum = std::max(nums[i], curBestSum + nums[i]);
        maxSum = std::max(maxSum, curBestSum);
    }
    return maxSum;
}

int main() {
    // std::vector<int> nums = { 5,4,-1,7,8 };
    std::vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };

    std::cout << maxSubArray(nums);

    return 0;
}

