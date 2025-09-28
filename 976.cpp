#include<iostream>
#include<vector>
#include<algorithm>

int largestPerimeter(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end(), std::greater<int>());

    for (int i = 0; i < nums.size() - 2; ++i) {
        if (nums[i + 2] + nums[i + 1] > nums[i]) {
            return nums[i] + nums[i + 1] + nums[i + 2];
        }
    }

    return 0;
}

int main() {
    std::vector nums = { 1,2,1,10 }; // 10, 2, 1, 1

    std::cout << largestPerimeter(nums);

    std::cin.get();
}

