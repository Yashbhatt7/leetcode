#include<iostream>
#include<vector>
#include<unordered_set>

std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::unordered_set<int> set1(nums1.begin(), nums1.end());
    std::unordered_set<int> result;

    for (int num : nums2) {
        if (set1.count(num)) {
            result.insert(num);
        }
    }

    return std::vector<int>(result.begin(), result.end());
}

int main() {
    std::vector<int> nums1 = {4,9,5};
    std::vector<int> nums2 = {9,4,9,8,4};

    std::vector<int> ans = intersection(nums1, nums2);

    std::cin.get();
}

