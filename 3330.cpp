#include <algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

int possibleStringCount(std::string word) {
    int str_num = 1;

    std::vector<std::pair<char, int>> ch_pair;

    int i = 0;
    while(i < word.size()) {
        char current = word[i];
        int count = 0;

        while(i < word.size() && word[i] == current) {
            count++;
            i++;
        }
        ch_pair.push_back({current, count});
    }

    for(const auto& group : ch_pair) {
        for(int i = 0; i < group.second - 1; ++i) {
            ++str_num;
        }
    }


    return str_num;
}

int main() {
    std::string word = "aaaa";

    std::cout << possibleStringCount(word);

    std::cin.get();
}



