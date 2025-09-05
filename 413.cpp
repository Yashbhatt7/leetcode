#include<iostream>
#include<vector>

int numberOfArithmeticSlices(std::vector<int>& nums) {
    if (nums.size() < 3) {
        return 0;
    }

    int count = 0;
    bool check = true;

    for (int i = 0; i < nums.size() - 1; ++i) {
        int a = std::abs(nums[i + 1] - nums[i]);
        if (a != 1) {
            check = false;
        }
    }

    if (check) {
        return ((nums.size() - 1) * (nums.size() - 2)) / 2;
    }

    return count;
}

int main() {
    std::vector<int> nums = { 1,2,3,4,5,6 };

    std::cout << numberOfArithmeticSlices(nums);

    std::cin.get();
}

