#include <algorithm>
#include <cctype>
#include<iostream>
#include<string>
#include<vector>

bool isValid(std::string word) {
    bool b2 = false;
    bool b3 = false;

    if(word.size() < 3) {
        return false;
    }

    int count = 0;
    int another_count = 0;
    std::vector<char> vowel = { 'a', 'e', 'i', 'o', 'u' };
    std::vector<char> upper_vowel = { 'A', 'E', 'I', 'O', 'U' };

    std::vector<char> consonant = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z' };
    std::vector<char> upper_consonant = { 'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z' };

    // b1 resolved...
    for (char c : word) {
        if (!std::isdigit(c) && !std::isalpha(c)) {
            return false;
        }
    }

    // b2, b3 resolved...
    for(int i = 0; i < upper_consonant.size(); ++i) {
        auto it = std::find(word.begin(), word.end(), upper_consonant[i]);
        auto it2 = std::find(word.begin(), word.end(), consonant[i]);

        if(it != word.end() || it2 != word.end()) {
            ++another_count;
        }
    }

    for(int i = 0; i < upper_vowel.size(); ++i) {
        auto it3 = std::find(word.begin(), word.end(), upper_vowel[i]);
        auto it4 = std::find(word.begin(), word.end(), vowel[i]);

        if(it3 != word.end() || it4 != word.end()) {
            ++count;
        }
    }

    if(another_count >= 1) {
        b2 = true;
    }

    if(count >= 1) {
        b3 = true;
    }

    return b2 && b3;
}

int main() {
    std::string word = "Stra";

    std::cout << isValid(word);

    std::cin.get();
}


