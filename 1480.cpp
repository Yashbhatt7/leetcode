#include<iostream>
#include<vector>

std::vector<int> runningSum(std::vector<int>& nums) {
    int sum = 0;
    for(int i = 0; i < nums.size() - 1; ++i) {
        nums[i + 1] = nums[i] + nums[i + 1];
    }

    return nums;
}

int main() {
    std::vector<int> nums = { 1, 2, 3, 4 };

    runningSum(nums);

    for(int i : nums) {
        std::cout << i << " ";
    }

    std::cin.get();
}

