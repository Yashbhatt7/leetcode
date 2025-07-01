#include <algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

// std::string retStr() {
//
// }

int possibleStringCount(std::string word) {
    int str_num = 1;
    std::vector<std::string> str_vec(word.size());

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

    str_vec.push_back(word);

    for(const auto& group : ch_pair) {
        for()
    }

    return str_num;
}

int main() {
    std::string word = "aabbccccaaaabbac";

    std::cout << "\n\n" << possibleStringCount(word);

    std::cin.get();
}


