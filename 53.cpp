#include<iostream>
#include<vector>

int maxSubArray(std::vector<int>& nums) {
    int Max = nums[0];
    int curBest = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        curBest = std::max(nums[i], (curBest + nums[i]));
        Max = std::max(Max, curBest);
    }

    return Max;
}

int main() {
    std::vector<int> nums = { 5,4,-1,7,8 };

    std::cout << maxSubArray(nums);

    return 0;
}

