#include<iostream>
#include<vector>

int maximumLength(std::vector<int>& nums) {
    if(nums.size() == 2) {
        return 2;
    }

    std::vector<int> sub;
    int temp = (nums[0] + nums[1]) % 2;

    for(int i = 1; i < nums.size() - 1; ++i) {
        if(temp == ((nums[i] + nums[i + 1]) % 2)) {
            sub.push_back(nums[i - 1]);
            temp = (nums[i] + nums[i + 1]) % 2;
        }
        else {
            std::cout << "adsfa";
        }
    }

    return sub.size();
}

int main() {
    std::vector<int> nums = { 1,2,3,4 };


    std::cout << maximumLength(nums);

    std::cin.get();
}


