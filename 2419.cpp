#include<iostream>
#include<vector>
#include<algorithm>

int longestSubarray(std::vector<int>& nums) {
    int len = 0;
    int tp = 0;

    int maxVal = *std::max_element(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); ++i) {
        if(nums[i] == maxVal) {
            ++tp;
            if(tp > len) {
                len = tp;
            }
        }
        else {
            tp = 0;
        }
    }

    return len;
}

int main() {
    std::vector<int> nums = { 1,2,3,3,2,2 };

    std::cout << longestSubarray(nums);

    std::cin.get();
}

