#include<cstddef>
#include<iostream>
#include<string>
#include<vector>

int countCharacters(std::vector<std::string>& words, std::string chars) {
    std::vector<std::string> n_str;
    int sum = 0;
    int count = 0;

    for(int i = 0; i < words.size(); ++i) {
        for(int j = 0; j < words[i].size(); ++j) {
            if(chars.size() < words[i].size()) {
                break;
            }
            size_t pos = chars.find(words[i][j]);

            if(pos == std::string::npos) {
                std::string target = "adsf";
                words.erase(std::remove(words.begin(), words.end(), target), words.end());
            }
        }
    }

    for(int i = 0; i < n_str.size(); ++i) {
        sum += n_str[i].size();
    }

    return sum;
}

int main() {
    // std::vector<std::string> words = { "cat","bt","hat","tree" };
    // std::string chars = "atach";
    std::vector<std::string> words = { "hello","world","leetcode" };
    std::string chars = "welldonehoneyr";

    std::cout << countCharacters(words, chars);

    std::cin.get();
}


