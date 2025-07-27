#include<iostream>
#include<vector>

int ind_left;
int ind_right;

bool left(int current, int i, std::vector<int>& nums) {
    int idx = i - 2;
    while(idx >= 0) {
        if(current != nums[idx]) {
            ind_left = idx;
            return true;
        } else {
            --idx;
        }
    }
    return false;
}

bool right(int current, int i, std::vector<int>& nums) {
    while(i < nums.size()) {
        if(current != nums[i]) {
            ind_right = i;
            return true;
        } else {
            ++i;
        }
    }
    return false;
}

int countHillValley(std::vector<int>& nums) {
    int res = 0;
    int current = nums[1];

    for(int i = 2; i < nums.size(); ++i) {
        if(left(current, i, nums) && right(current, i, nums)) {
            if(current > nums[ind_right] && current > nums[ind_left]) {
                std::cout << "this is if...\n";
                std::cout << "current_index..." << i - 1 << "\n";
                std::cout << "current: " << current << "\n";
                std::cout << "ind_left: " << ind_left << "\n";
                std::cout << "ind_right: " << ind_right << "\n";
                ++res;
            }
            else if(current < nums[ind_right] && current < nums[ind_left]) {
                std::cout << "this is else if...\n";
                std::cout << "current_index..." << i - 1 << "\n";
                std::cout << "current: " << current << "\n";
                std::cout << "ind_left: " << ind_left << "\n";
                std::cout << "ind_right: " << ind_right << "\n";
                ++res;
            }
            // else if(current == nums[i] || current == nums[i - 2]) {
            //     ++res;
            //     jump = res;
            // }
            current = nums[i];
        }
    }

    return res;
}

int main() {
    std::vector<int> nums = { 6,6,5,5,4,1 };

    std::cout << countHillValley(nums);

    std::cin.get();
}
