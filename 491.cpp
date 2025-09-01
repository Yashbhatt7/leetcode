#include<iostream>
#include<vector>
#include<set>

// Drop the idea.
std::vector<std::vector<int>> findSubsequences(std::vector<int>& nums) {
    std::set<std::vector<int>> setOfVec;

    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            std::vector<int> temp;

        }
    }

    return {};
}

int main() {
    std::vector<int> nums = { 4,6,7,7 };

    std::vector<std::vector<int>> vec = findSubsequences(nums);

    std::cout << "\n[ ";
    for (const auto& i : vec) {
        std::cout << "[ ";
        for (const auto& j : i) {
            std::cout << j << ", ";
        }
        std::cout << " ], ";
    }
    std::cout << " ]\n";

    std::cin.get();
}

