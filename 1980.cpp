#include<iostream>
#include<string>
#include<vector>

std::string findDifferentBinaryString(std::vector<std::string>& nums) {
    std::string str(nums[0].size(), ' ');
    char ch;

    for(int i = 0; i < nums.size(); ++i) {
        if(nums[i][i] == '0') {
            ch = '1';
        }
        else {
            ch = '0';
        }
        str[i] = ch;
    }

    return str;
}

int main() {
    /*std::vector<std::string> str = { "111", "011", "001" };*/
    std::vector<std::string> str = { "01", "10" };

    std::cout << findDifferentBinaryString(str);

    std::cin.get();
}



