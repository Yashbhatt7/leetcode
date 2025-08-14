#include<iostream>
#include<vector>
#include<unordered_map>

int longestConsecutive(std::vector<int>& nums) {
    std::unordered_map<int, int> freq;

    for (const auto& i : nums) {
        ++freq[i];
    }

    if (freq[100]) {
        std::cout << "okay!" << "\n";
    } else {
        std::cout << "no way!" << "\n";
    }

    return 0;
}

int main() {
    std::vector<int> nums = { 100,4,200,1,3,2 };

    std::cout << longestConsecutive(nums);

    std::cin.get();
}


