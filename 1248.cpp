#include<iostream>
#include<vector>
#include<unordered_map>

int numberOfSubarrays(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> odd_mapping;
    int count = 0;
    int idx = 0;

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] % 2 != 0) {
            nums[i] = 1;
        } else {
            nums[i] = 0;
        }
    }

    for (int i = 0; i < nums.size(); ++i) {
        ++odd_mapping[nums[i]];

        if (odd_mapping[1] == k) {
            ++count;
            --odd_mapping[nums[idx]];
            ++idx;
        }
    }

    return count;
}

int main() {
    // std::vector<int> nums = { 1,1,2,1,1 };
    std::vector<int> nums = { 2,2,2,1,2,2,1,2,2,2 };

    // int k = 3;
    int k = 2;

    std::cout << numberOfSubarrays(nums, k);

    std::cin.get();
}

