#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

std::vector<std::string> findWords(std::vector<std::string>& words) {
    std::vector<std::string> word;
    std::string str1 = "qwertyuiop";
    std::string str2 = "asdfghjkl";
    std::string str3 = "zxcvbnm";

    std::unordered_map<char, std::vector<std::string>> vec_set;

    for (const std::string& word : words) {
        if (!word.empty()) {
            char first = tolower(word[0]);
            vec_set[first].push_back(word);
        }
    }


    for(int i = 0; i < str1.size(); ++i) {
        for(int j = )
    }

    return word;
}

int main() {
    std::vector<std::string> words = {
        "Hello","Alaska","Dad","Peace"
    };

    std::cin.get();
}


