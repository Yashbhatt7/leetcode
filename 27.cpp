#include<iostream>
#include<vector>

int removeElement(std::vector<int>& nums, int val) {
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == val) {
            nums.erase(nums.begin() + i);
            --i;
        }
    }

    return nums.size();
}

int main() {
    std::vector<int> nums = { 3,2,2,3 };
    int val = 3;

    std::cout << removeElement(nums, val);

    std::cin.get();
}

