#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>

int countCompleteSubarrays(std::vector<int>& nums) {
    std::unordered_set<int> size_freq(nums.begin(), nums.end());
    int sz = size_freq.size();
    std::unordered_map<int, int> freq;
    int left = 0;
    int dis = 0;
    int count = 0;

    for (int right = 0; right < nums.size(); ++right) {
        if (++freq[nums[right]] == 1) {
            ++dis;
        }
        while (dis == sz) {
            count += nums.size() - right;
            if (--freq[nums[left]] == 0) {
                --dis;
            }
            ++left;
        }
    }

    return count;
}

int main() {
    std::vector<int> nums = { 1,3,1,2,2 };

    std::cout << countCompleteSubarrays(nums);

    std::cin.get();
}

