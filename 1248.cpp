#include<iostream>
#include<vector>
#include<unordered_map>

int atMost(const std::vector<int>& nums, int k) {
    int oddCount = 0;
    int subArrayCount = 0;

    int left = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] % 2 == 1) ++oddCount;

        while (oddCount > k) {
            if (nums[left] % 2 == 1) --oddCount;
            ++left;
        }
        subArrayCount += i - left + 1;
    }
    return subArrayCount;
}

int numberOfSubarrays(std::vector<int>& nums, int k) {
    return atMost(nums, k) - atMost(nums, k - 1);
}

int main() {
    // std::vector<int> nums = { 1,1,2,1,1 };
    std::vector<int> nums = { 2,2,2,1,2,2,1,2,2,2 };

    // int k = 3;
    int k = 2;

    std::cout << numberOfSubarrays(nums, k);

    std::cin.get();
}

