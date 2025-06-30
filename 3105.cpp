#include<iostream>
#include<vector>
#include<algorithm>

int longestMonotonicSubarray(std::vector<int>& nums) {
    int n = 0;

    if(std::is_sorted(nums.begin(), nums.end()) || std::is_sorted(nums.begin(), nums.end(), std::greater<int>())) {
        return nums.size();
    }

    for(int i = 0; i < nums.size(); ++i) {

    }

    return n;
}

int main() {


    std::cin.get();
}

