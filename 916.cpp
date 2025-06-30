#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

std::vector<std::string> wordSubsets(std::vector<std::string>& words1, std::vector<std::string>& words2) {
    std::vector<std::string> vec;
    std::unordered_map<char, int> umap;

    for(int i = 0; i < words2.size(); ++i) {
        for(char c : words2[i]) {
            umap[c];
        }
    }
    int count = 0;

    for(int i = 0; i < words1.size(); ++i) {
        for(int j = 0; j < words2.size(); ++j) {
            if(words1[i].find(words2[j]) != std::string::npos) {
                ++count;
            }
            if(count == words2.size()) {
                vec.push_back(words1[i]);
            }
        }
        count = 0;
    }

    return vec;
}

int main() {
    std::vector<std::string> words1 {
        "amazon",
        "apple",
        "facebook",
        "google",
        "leetcode",

    };

    std::vector<std::string> words2 {
        "e",
        "o",
    };

    std::vector<std::string> vec = wordSubsets(words1, words2);

    for(std::string i : vec) {
        std::cout << i << "\n";
    }

    std::cin.get();
}


