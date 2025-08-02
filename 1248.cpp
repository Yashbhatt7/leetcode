#include<iostream>
#include<vector>
#include<unordered_map>

int numberOfSubarrays(std::vector<int>& nums, int k) {
    int m_count = 0;
    int count = 0;


    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i; j < nums.size(); ++j) {
            if (nums[j] % 2 != 0) {
                ++count;
            }
            if (count == k) {
                ++m_count;
            }
        }
        count = 0;
    }

    return m_count;
}

int main() {
    // std::vector<int> nums = { 1,1,2,1,1 };
    std::vector<int> nums = { 2,2,2,1,2,2,1,2,2,2 };

    // int k = 3;
    int k = 2;

    std::cout << numberOfSubarrays(nums, k);

    std::cin.get();
}
