#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
    std::vector<std::vector<std::string>> result;
    std::unordered_map<std::string, std::vector<std::string>> keyGroup;

    for(const std::string& str : strs) {
        std::string keyStr = str;
        std::sort(keyStr.begin(), keyStr.end());

        keyGroup[keyStr].push_back(str);
    }

    for(const auto& str : keyGroup) {
        result.push_back(str.second);
    }

    return result;
}

int main() {
    std::vector<std::string> vec2 {
        "eat",
        "tea",
        "tan",
        "ate",
        "nat",
        "bat",
    };

    std::vector<std::vector<std::string>> result = groupAnagrams(vec2);

    for(int i = 0; i < result.size(); ++i) {
        for(const std::string& str : result[i]) {
            std::cout << str << "\n";
        }
        std::cout << "\n";
    }

    std::cin.get();
}



