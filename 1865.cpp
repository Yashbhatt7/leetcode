#include<iostream>
#include <unordered_map>
#include<vector>

class FindSumPairs {
public:
    FindSumPairs(std::vector<int>& nums1, std::vector<int>& nums2) : nums1(nums1), nums2(nums2) {
        for(int num : nums2) {
            freq[num]++;
        }
    }

    void add(int index, int val) {
        int oldFreq = nums2[index];
        --freq[oldFreq];
        nums2[index] += val;
        ++freq[nums2[index]];
    }

    int count(int tot) {
        int count = 0;
        for(int i = 0; i < nums1.size(); ++i) {
            int temp = tot - nums1[i];
            count += freq[temp];
        }
        return count;
    }

private:
    std::vector<int> nums1;
    std::vector<int> nums2;
    std::unordered_map<int, int> freq;
};

int main() {
    std::vector<int> nums1 = { 1, 1, 2, 2, 2, 3 };
    std::vector<int> nums2 = { 1, 4, 5, 2, 5, 4 };

    FindSumPairs obj(nums1, nums2);
    std::cout << obj.count(7);
    obj.add(3, 2);
    std::cout << obj.count(8);

    std::cin.get();
}


