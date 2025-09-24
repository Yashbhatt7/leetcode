#include <algorithm>
#include<iostream>
#include<vector>
#include<unordered_map>

int maximumUniqueSubarray(std::vector<int>& nums) {
    std::unordered_map<int, int> freq;
    int maxSum = 0;
    int tempSum = 0;

    int left = 0;
    for (int i = 0; i < nums.size(); ++i) {
        ++freq[nums[i]];

        while (freq[nums[i]] > 1) {
            --freq[nums[left]];
            tempSum -= nums[left];
            ++left;
        }

        tempSum += nums[i];
        maxSum = std::max(maxSum, tempSum);
    }

    return maxSum;
}

int main() {
    // std::vector<int> nums = { 4,2,4,5,6 };
    std::vector<int> nums = { 3,2,5,21,34,5,22,90,323,222 };

    std::cout << maximumUniqueSubarray(nums);

    std::cin.get();
}


