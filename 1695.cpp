#include <algorithm>
#include<iostream>
#include<vector>
#include<unordered_map>

int maximumUniqueSubarray(std::vector<int>& nums) {
    std::unordered_map<int, int> freq;

    for(const auto& i : nums) {
        ++freq[i];
    }


}

int main() {
    // std::vector<int> nums = { 4,2,4,5,6 };
    std::vector<int> nums = { 5,2,1,2,5,2,1,21,34,5,22,90,323,222 };

    maximumUniqueSubarray(nums);

    std::cin.get();
}


