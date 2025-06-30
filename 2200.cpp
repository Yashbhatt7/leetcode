#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

std::vector<int>findKDistantIndices(std::vector<int>& nums, int key, int k) {
    std::vector<int> indices;
    std::vector<int> keys;

    for(int i = 0; i < nums.size(); ++i) {
        if(nums[i] == key) {
            keys.push_back(i);
        }
    }

    for(int i = 0; i < nums.size(); ++i) {
        for(int j = 0; j < keys.size(); ++j) {
            if(abs(i - keys[j]) <= k) {
                indices.push_back(i);
            }
        }
    }

    std::sort(indices.begin(), indices.end());
    indices.erase(std::unique(indices.begin(), indices.end()), indices.end());

    return indices;
}

int main() {
    // std::vector<int> nums = { 3,4,9,1,3,9,5 };
    std::vector<int> nums = { 2,2,2,2,2 };
    int key = 2;
    int k = 2;

    std::vector<int> vec = findKDistantIndices(nums, key, k);

    for(int x : vec) {
        std::cout << x << " ";
    }

    std::cin.get();
}


