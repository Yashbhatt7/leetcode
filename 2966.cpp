#include<iostream>
#include<vector>
#include<algorithm>

std::vector<std::vector<int>> divideArray(std::vector<int>& nums, int k) {
    std:int group_count = nums.size() / 3;
    std::vector<std::vector<int>> vec(group_count);
    std::sort(nums.begin(), nums.end());

    int indx = 0;
    for(int i = 0; i < nums.size(); ++i) {
        vec[indx].push_back(nums[i]);

        if(vec[indx].size() == 3) {
            ++indx;
        }
    }

    for(const auto& row : vec) {
        if(!row.empty()) {
            int first = row.front();
            int last = row.back();

            if(last - first > k) {
                std::cout << "caught\n";
                return {};
            }
        }
    }

    for(const auto& row : vec) {
        for(int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return vec;
}

int main() {
    // std::vector<int> nums = { 1, 3, 4, 8, 7, 9, 3, 5, 1 };
    // std::vector<int> nums = { 2,4,2,2,5,2 };
    std::vector<int> nums = { 4,2,9,8,2,12,7,12,10,5,8,5,5,7,9,2,5,11 };
    int k = 14;

    divideArray(nums, k);

    std::cin.get();
}


