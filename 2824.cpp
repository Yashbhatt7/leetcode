#include<iostream>
#include<vector>

int countPairs(std::vector<int>& nums, int target) {
    int numOfPair = 0;

    for(int i = 0; i < nums.size(); ++i) {
        for(int j = i + 1; j < nums.size(); ++j) {
            int sum = nums[i] + nums[j];
            if(sum < target) {
                ++numOfPair;
            }
        }
    }

    return numOfPair;
}


int main () {
    // std::vector<int> nums = { -1,1,2,3,1 };
    std::vector<int> nums = { -6,2,5,-2,-7,-1,3 };
    // int target = 2;
    int target = -2;

    std::cout << countPairs(nums, target);

    std::cin.get();
}


