#include<iostream>
#include<vector>
#include<unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> freq;
    std::vector<int> vec;

    int a = 0;
    for (const auto& i : nums) {
        freq[i] = a;
        ++a;
    }

    int n = 0;
    for (int i = 0; i < nums.size(); ++i) {
        int n = target - nums[i];
        if (freq[n] && freq[n] != i) {
            return {i, freq[n]};
        }
    }

    return {};
}

int main() {
    std::vector<int> vec { 3, 1, 4, 2};
    int target = 9;

    std::vector<int> vec2 =  twoSum(vec, target);

    for(int i : vec2) {
        std::cout << i << " ";
    }

    std::cin.get();
}


