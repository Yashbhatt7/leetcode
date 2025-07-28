#include<iostream>
#include<vector>
#include<algorithm>

std::vector<int> minSubsequence(std::vector<int>& nums) {
    std::vector<int> result;

    std::sort(nums.begin(), nums.end(), std::greater<int>());

    int totalSum = 0;
    int sum = 0;

    for(int i = 0; i < nums.size(); ++i) {
        totalSum += nums[i];
    }

    for(int i = 0; i < nums.size(); ++i) {
        totalSum -= nums[i];
        sum += nums[i];
        result.push_back(nums[i]);
        if(sum > totalSum) {
            break;
        }
    }

    return result;
}

int main() {
    std::vector<int> nums = { 4, 3, 10, 9, 8 };

    std::vector<int> vec = minSubsequence(nums);

    for(const auto& v : vec) {
        std::cout << v << " ";
    }

    std::cin.get();
}

