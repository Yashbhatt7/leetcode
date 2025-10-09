#include<iostream>
#include<vector>
#include<unordered_map>

int atMost(const std::vector<int>& nums, int goal) {
    if (goal < 0) return 0;
    int nSubarray = 0;
    int left = 0;
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        while (sum > goal) {
            sum -= nums[left++];
        }

        nSubarray += (i - left + 1);
    }

    return nSubarray;
}

int numSubarraysWithSum(std::vector<int>& nums, int goal) {
    return atMost(nums, goal) - atMost(nums, goal - 1);
}

int main() {
    std::vector<int> nums = { 1,0,1,0,1 };
    int goal = 2;

    numSubarraysWithSum(nums, goal);

    std::cin.get();
}

