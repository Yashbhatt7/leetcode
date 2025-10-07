#include<iostream>
#include<vector>
#include<sstream>
#include<unordered_map>

std::vector<std::string> uncommonFromSentences(std::string s1, std::string s2) {
    std::vector<std::string> strs;
    std::unordered_map<std::string, int> freq;
    std::string word;

    std::istringstream iss(s1);
    while (iss >> word) {
        ++freq[word];
    }

    std::istringstream iss2(s2);
    while (iss2 >> word) {
        ++freq[word];
    }

    for (const auto& i : freq) {
        if (i.second == 1) {
            strs.push_back(i.first);
        }
    }

    return strs;
}

int main() {


    std::cin.get();
}

