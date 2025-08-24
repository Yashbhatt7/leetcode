#include<iostream>
#include<vector>
#include<unordered_map>

int longestSubarray(std::vector<int>& nums) {
    if (nums.size() == 1) {
        return 0;
    }
    int max = 0;
    int zr_count = 0;

    int left = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0) {
            ++zr_count;
        }
        while (zr_count > 1) {
            if (nums[left] == 0) {
                --zr_count;
            }
            ++left;
        }
        if (max < i - left) {
            max = i - left;
        }
    }

    return max;
}

int main () {
    std::vector<int> nums = { 0,1,1,1,0,1,1,0,1 };

    std::cout << longestSubarray(nums) << "\n";

    std::cin.get();
}

