#include<iostream>
#include<vector>

#define INT_MAX 2003403242

int minSubArrayLen(int target, std::vector<int>& nums) {
    int min = INT_MAX;
    int sum = 0;
    int left = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];

        while (sum >= target) {
            min = std::min(min, i - left + 1);
            sum -= nums[left];
            ++left;
        }
    }

    return min == INT_MAX ? 0 : min;
}

int main() {
    std::vector<int> nums = { 2,3,1,2,4,3 };
    // std::vector<int> nums = { 1, 2, 3, 4, 5 };
    int target = 7;
    // int target = 11;

    std::cout << minSubArrayLen(target, nums);

    std::cin.get();
}

