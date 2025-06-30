#include<iostream>
#include<vector>
#include<unordered_map>

int minimumOperations(std::vector<int>& nums) {
    std::unordered_map<int, int> freq;
    std::unordered_map<int, int> freq2;
    int count = 0;

    for(int num : nums) {
        ++freq2[num];
    }

    bool check = true;
    for(std::unordered_map<int, int>::iterator it = freq2.begin(); it != freq2.end(); ++it) {
        if(it->second > 1) {
            check = false;
            break;
        }
    }

    if(check == true) {
        return 0;
    }

    for(int i = 0; i < 3; ++i) {
        nums.erase(nums.begin());
    }

    ++count;

    for(int num : nums) {
        ++freq[num];
    }

    for(std::unordered_map<int, int>::iterator it = freq.begin(); it != freq.end(); ++it) {
        /*std::cout << it->first << ": " << it->second << "\n";*/
        if(it->second > 1) {
            /*std::cout << "asdfasdf\n";*/
            for(int i = 0; i < 3; ++i) {
                nums.erase(nums.begin());
            }
            ++count;
        }
    }

    return count;
}

int main() {
    /*std::vector<int> nums { 1, 2, 3, 4, 2, 3, 3, 5, 7 };*/
    /*std::vector<int> nums { 4,5,6,4,4 };*/
    /*std::vector<int> nums { 6,7,8,9 };*/
    std::vector<int> nums { 3, 2 };

    std::cout <<  minimumOperations(nums);

    std::cin.get();
}

