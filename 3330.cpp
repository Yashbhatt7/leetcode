#include <algorithm>
#include<iostream>
#include<string>
#include<vector>

int possibleStringCount(std::string word) {
    int str_num = 0;
    std::vector<std::string> str_vec(word.size());
    int cnt = 0;

    for(int i = 0; i < word.size() - 1; ++i) {
        str_vec[cnt].push_back(word[i]);
        if(word[i] != word[i + 1]) {
            ++cnt;
            str_vec[cnt].push_back(word[i + 1]);
        }
    }

    for(const auto& s : str_vec) {
        std::cout << s << "\n";
    }

    return str_num;
}

int main() {
    std::string word = "abbcccbbbaaaa";

    std::cout << "\n\n" << possibleStringCount(word);

    std::cin.get();
}

