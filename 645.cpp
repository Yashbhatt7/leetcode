#include<iostream>
#include<vector>
#include<algorithm>

std::vector<int> findErrorNums(std::vector<int>& nums) {
    std::vector<int> vec;
    std::sort(nums.begin(), nums.end());

    for (int i = nums[0]; i < nums.size(); ++i) {
        if (i != nums[i] ) {

            vec.push_back(nums[i]);
            vec.push_back(nums[i] + 1);
            break;
        }
    }

    return vec;
}

int main() {
    std::vector<int> nums = { 1,3,3 };

    findErrorNums(nums);

    std::cin.get();
}

