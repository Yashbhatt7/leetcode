#include<iostream>
#include<vector>

int sumOfGoodNumbers(std::vector<int>& nums, int k) {
    int sum = 0;

    for(int i = 0; i < nums.size(); ++i) {
        int exist2 = i + k;
        int exist = i - k;
        int size = nums.size();

        if(!(exist < 0) && !(exist2 >= size)) {
            if(nums[i] > nums[exist] && nums[i] > nums[exist2]) {
                std::cout << "ffffhey" << i << "\n";
                sum = sum + nums[i];
            }
        }

        if(exist2 >= nums.size()) {
            if(nums[i] > nums[exist]) {
                std::cout << "aaaaaaaaaaaaahey" << i << "\n";
                sum = sum + nums[i];
            }
        }

        else if(exist < 0) {
            if(nums[i] > nums[exist2]) {
                std::cout << "aaaaahey" << i << "\n";
                sum = sum + nums[i];
            }
        }
        else {
        }
    }

    return sum;
}

int main() {
    std::vector<int> vec { 1,3,2,1,5,4 };
    int k = 2;

    std::cout << sumOfGoodNumbers(vec, k);

    std::cin.get();
}

