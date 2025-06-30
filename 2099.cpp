#include<algorithm>
#include<iostream>
#include<vector>
#include<map>

std::vector<int> maxSubsequence(std::vector<int>& nums, int k) {
    std::vector<int> vec;
    std::map<int, std::vector<int>> valueToIndices;

    for(int i = 0; i < nums.size(); i++) {
        valueToIndices[nums[i]].push_back(i);
    }

    for(const auto& i : valueToIndices) {
        std::cout << i.first << " ";
    }

    int a = 1;
    int i = 0;

    for(auto it = valueToIndices.rbegin(); it != valueToIndices.rend(); ++it) {
        const auto& indices = it->second;

        for(int index : indices) {
            vec.push_back(nums[index]);
            ++i;
            ++a;
        }
        if(a > k) {
            break;
        }
    }

    std::reverse(vec.begin(), vec.end());

    return vec;
}

int main() {
    // std::vector<int> nums = { 2,1,3,3 };
    // std::vector<int> nums = { -1,-2,3,4 };
    std::vector<int> nums = { 50,-75 };
    int k = 2;

    std::vector<int> vec = maxSubsequence(nums, k);

    for(int i : vec) {
        std::cout << i << " ";
    }

    std::cin.get();
}


