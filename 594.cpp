#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

int findLHS(std::vector<int>& nums) {
    int len = 0;
    std::vector<std::vector<int>> seq_vec(nums.size());
    int count = 0;

    for(int i = 0; i < nums.size(); ++i) {
        seq_vec[i].push_back(nums[i]);
        for(int j = i + 1; j < nums.size() - 1; ++j) {
            int diff = abs(nums[i] - nums[j]);
            int diff2 = abs(nums[j + 1] - nums[i + 1]);
            if(nums[i] == nums[j]) {
                seq_vec[i].push_back(nums[j]);
            }
            if(diff == 1) {
                ++count;
                seq_vec[i].push_back(nums[j]);
            }
        }
        if(count == 0) {
            seq_vec[i].clear();
        }

        count = 0;
    }

    for(auto i : seq_vec){
        for(int x : i){
            std::cout << x << " ";
        }
        std::cout << "\n";
    }

    std::sort(seq_vec.begin(), seq_vec.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a.size() > b.size();
    });

    len = seq_vec[0].size();

    if(len == 1) {
        return 0;
    }

    return len;
}

int main() {
    // std::vector<int> nums = { 1,3,2,2,5,2,3,7 };
    // std::vector<int> nums = { 1,2,3,4 };
    // std::vector<int> nums = { 1, 1, 1, 1 };
    // std::vector<int> nums = { -3,-1,-1,-1,-3,-2 };
    std::vector<int> nums = { 1,2,1,3,0,0,2,2,1,3,3 };

    std::cout << findLHS(nums);

    std::cin.get();
}


