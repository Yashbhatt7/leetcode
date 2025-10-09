#include<iostream>
#include<vector>

int maxAbsoluteSum(std::vector<int>& nums) {
    int maxSum = nums[0];
    int curSum = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        curSum = std::max(std::abs(nums[i]), std::abs(nums[i] + curSum));
        maxSum = std::max(maxSum, curSum);
    }

    return maxSum;
}

int main() {
    std::vector<int> vec = { 1,-3,2,3,-4 };

    std::cout << maxAbsoluteSum(vec);

    std::cin.get();
}


