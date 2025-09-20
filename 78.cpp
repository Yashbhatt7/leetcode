#include<iostream>
#include<vector>

std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
    std::vector<std::vector<int>> allSubsets;
    allSubsets.push_back({});

    for (int num : nums) {
        int n = allSubsets.size();
        for (int i = 0; i < n; ++i) {
            std::vector<int> subset = allSubsets[i];
            subset.push_back(num);
            allSubsets.push_back(subset);
        }
    }

    return allSubsets;
}

int main() {
    std::vector<int> nums = { 1,2,3 };

    std::vector<std::vector<int>> vec = subsets(nums);

    for (const auto& i : vec) {
        std::cout << "[ ";
        for (const auto& j : i) {
            std::cout << j << ", ";
        }
        std::cout << " ]";
    }

    std::cin.get();
}
