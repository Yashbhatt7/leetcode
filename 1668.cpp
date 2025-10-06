#include<iostream>
#include<string>

int maxRepeating(std::string sequence, std::string word) {
    int k = 0;
    std::string incSub = word;

    while (sequence.find(incSub) != std::string::npos) {
        ++k;
        incSub += word;
    }

    return k;
}

int main() {
    std::string sequence = "aaabaaaabaaabaaaabaaaabaaaabaaaaba";
    std::string word = "aaaba";

    std::cout << maxRepeating(sequence, word);

    std::cin.get();
}

