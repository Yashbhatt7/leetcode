#include<iostream>
#include<vector>
#include<set>

int removeDuplicates(std::vector<int>& nums) {
    std::set<int> s(nums.begin(), nums.end());

    nums.clear();
    for (const auto& i : s) {
        nums.push_back(i);
    }

    return s.size();
}

int main() {
    // std::vector<int> nums = { 0,0,1,1,1,2,2,3,3,4 };
    std::vector<int> nums = { 1,1,2 };

    std::cout << removeDuplicates(nums);

    std::cin.get();
}


