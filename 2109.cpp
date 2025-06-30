#include <iostream>
#include <vector>
#include <string>

std::string addSpaces(std::string s, std::vector<int>& spaces) {
    std::vector<std::string> vec;
    std::string str = "";

    vec.push_back(s.substr(0, spaces[0]));
    vec.push_back(" ");

    for (int i = 1; i < spaces.size(); ++i) {
        vec.push_back(s.substr(spaces[i - 1], spaces[i] - spaces[i - 1]));
        vec.push_back(" ");
    }

    vec.push_back(s.substr(spaces.back()));

    for (const std::string& st : vec) {
        str += st;
    }

    return str;
}

int main() {
    std::string s = "LeetcodeHelpsMeLearn";
    std::vector<int> spaces = { 8, 13, 15 };

    std::cout << addSpaces(s, spaces);

    return 0;
}

