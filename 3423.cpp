#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

int maxAdjacentDistance(std::vector<int>& nums) {
    std::vector<int> vec;

    int sum = abs(nums[0] - nums[nums.size() - 1]);
    vec.push_back(sum);

    for(int i = 0; i < nums.size() - 1; ++i) {
        int temp = abs(nums[i] - nums[i + 1]);
        vec.push_back(temp);
    }

    std::sort(vec.begin(), vec.end());

    return vec[vec.size() - 1];
}

int main() {


    std::cin.get();
}
