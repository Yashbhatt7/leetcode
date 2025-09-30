#include<iostream>
#include<vector>

int triangularSum(std::vector<int>& nums) {
    int temp = 0;
    int size = nums.size();
    std::vector<int> vec = nums;

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < nums.size() - 1; ++j) {
             nums[j] = (vec[j] + vec[j + 1]) % 10;
        }
        vec = nums;
    }

    return nums[0];
}

int main() {
    std::vector<int> nums = { 1,2,3,4,5 };

    std::cout << triangularSum(nums);

    std::cin.get();
}

