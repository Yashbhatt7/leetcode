#include<iostream>
#include<vector>
#include<algorithm>

int partitionArray(std::vector<int>& nums, int k) {
    int num;

    std::vector<int> temp = nums;
    std::vector<std::vector<int>> subsequence(nums.size());
    int size = temp.size() - 1;

    std::sort(temp.begin(), temp.end());

    subsequence[0].push_back(temp[size]);
    // temp.erase(temp.begin() + size);

    for(int i = 0; i < temp.size(); ++i) {
        for(int j = 0; j < temp.size(); ++j) {
            if(temp[size] - temp[size - 1] <= k) {
                subsequence[i].push_back(temp[size]);
                temp.erase(temp.begin() + size);
            }
        }
    }

    return num;
}

int main() {
    std::vector<int> nums = { 3,6,1,2,5 };
    int k = 2;

    std::cout << partitionArray(nums, k);

    std::cin.get();
}


