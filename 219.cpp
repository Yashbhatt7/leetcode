#include<iostream>
#include<vector>
#include<unordered_map>

bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> freq;

    int till = 0;
    for (const auto& i : nums) {
        ++freq[i];
        ++till;
        if (till == k + 1) {
            break;
        }
    }
    for (const auto& i : freq) {
        if (i.second > 1) return true;
    }

    int left = 0;
    --freq[nums[left]];
    ++left;

    for (int i = k + 1; i < nums.size(); ++i) {
        ++freq[nums[i]];

        if (freq[nums[i]] > 1) {
            return true;
        }
        --freq[nums[left]];
        ++left;
    }

    return false;
}

int main() {
    std::vector<int> nums = { 1,2,3,1,2,3 };
    int k = 2;

    std::cout << containsNearbyDuplicate(nums, k);

    std::cin.get();
}

