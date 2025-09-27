#include<iostream>
#include<vector>

int numSubarrayProductLessThanK(std::vector<int>& nums, int k) {
    if (k <= 1) return 0;
    int count = 0;
    int prod = 1;

    int left = 0;
    for (int i = 0; i < nums.size(); ++i) {
        prod *= nums[i];

        while (prod >= k) {
            prod /= nums[left];
            ++left;
        }

        count += i - left + 1;
    }

    return count;
}

int main() {
    std::vector<int> nums = { 10,5,2,6 };
    int k = 100;

    std::cout << numSubarrayProductLessThanK(nums, k);

    std::cin.get();
}

