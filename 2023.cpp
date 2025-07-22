#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

int numOfPairs(std::vector<std::string>& nums, std::string target) {
    int pairs = 0;

    std::unordered_map<std::string, int> freq;
    std::string temp = "";

    for (const auto& num : nums) {
        ++freq[num];
    }

    for(int i = 0; i < nums.size(); ++i) {
        // for(int j = 0; j < nums.size(); ++j) {
        //     temp = nums[i];
        //     temp += nums[j];
        //     if(i != j && temp == target) {
        //         ++pairs;
        //         std::cout << "pairs: " << pairs << " " << "temp: " << temp << "\n";
        //     }
        // }

        for(const auto& j : freq) {

        }
    }

    return pairs;
}

int main() {
    std::vector<std::string> nums = {
        "77","77","77","77",
    };

    std::string target = "7777";

    std::cout << numOfPairs(nums, target);

    std::cin.get();
}


