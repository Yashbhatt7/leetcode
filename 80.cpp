#include<iostream>
#include<vector>
#include<unordered_map>

int removeDuplicates(std::vector<int>& nums) {
    std::unordered_map<int, int> freq;

    for (const auto& i : nums) {
        ++freq[i];
    }

    for (int i = 0; i < nums.size(); ++i) {
        if (freq[nums[i]] > 2) {
            while (freq[nums[i]] > 2) {
                nums.erase(nums.begin() + i);
                --freq[nums[i]];
            }
        }
    }

    return nums.size();
}

int main() {


    std::cin.get();
}

