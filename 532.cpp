#include<iostream>
#include<vector>
#include<unordered_map>

int findPairs(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> freq;
    int pairs = 0;

    for (const auto& i : nums) {
        ++freq[i];
    }

    if (k == 0) {
        for (const auto& i : freq) {
            if (i.second > 1) ++pairs;
        }
    } else {
        for (const auto& i : freq) {
            if (freq.count(i.first + k)) ++pairs;
        }
    }

    return pairs;
}

int main() {
    std::vector<int> nums = { 3,1,4,1,5 };
    int k = 2;

    std::cout << findPairs(nums, k);

    std::cin.get();
}

