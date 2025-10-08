#include<iostream>
#include<vector>
#include<unordered_map>

std::vector<int> findErrorNums(std::vector<int>& nums) {
    std::unordered_map<int, int> freq;
    int first = -1;
    int second = -1;

    for (const auto& i : nums) {
        ++freq[i];
    }

    for (int i = 1; i <= nums.size(); ++i) {
        if (freq[i] == 2) first = i;
        if (freq[i] == 0) second = i;
        if (first != -1 && second != -1) break;
    }

    return {first, second};
}

int main() {
    // std::vector<int> nums = { 1,2,2,4 };
    std::vector<int> nums = { 2,2 };

    std::vector<int> vec = findErrorNums(nums);

    std::cout << "\n\nvec: ";
    for (int i : vec) {
        std::cout << i << ", ";
    }

    std::cin.get();
}

