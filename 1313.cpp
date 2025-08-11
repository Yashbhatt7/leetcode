#include<iostream>
#include<vector>

std::vector<int> decompressRLElist(std::vector<int>& nums) {
    std::vector<int> vec = {};

    for (int i = 0; i < nums.size(); i += 2) {
        for (int j = 0; j < nums[i]; ++j) {
            vec.push_back(nums[i + 1]);
        }
    }

    return vec;
}

int main() {
    std::vector<int> nums = { 1,2,3,4 };

    std::vector<int> vec = decompressRLElist(nums);

    for (const auto& i : vec) {
        std::cout << i << " ";
    }

    std::cin.get();
}


