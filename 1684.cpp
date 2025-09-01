#include<iostream>
#include<vector>

int countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
    int count = 0;

    for (int i = 0; i < words.size(); ++i) {
        bool check = true;
        for (int j = 0; j < words[i].size(); ++j) {
            if (allowed.find(words[i][j]) == std::string::npos) {
                check = false;
                break;
            }
        }
        if (check) {
            ++count;
        }
    }

    return count;
}

int main() {
    // std::string allowed = "abc";
    // std::vector<std::string> words = { "a","b","c","ab","ac","bc","abc" };

    std::string allowed = "cad";
    std::vector<std::string> words = { "cc","acd","b","ba","bac","bad","ac","d" };

    std::cout << countConsistentStrings(allowed, words);

    std::cin.get();
}

