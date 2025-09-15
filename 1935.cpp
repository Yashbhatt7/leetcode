#include<iostream>
#include<sstream>
#include<string>

int canBeTypedWords(std::string text, std::string brokenLetters) {
    int count = 0;
    std::istringstream iss(text);
    std::string word;

    while (iss >> word) {
        bool check = true;

        for (const auto& ch : brokenLetters) {
            if (word.find(ch) != std::string::npos) {
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
    std::string text = "hello world";
    std::string brokenLetters = "ad";

    std::cout << canBeTypedWords(text, brokenLetters);

    std::cin.get();
}

