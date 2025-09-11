#include<iostream>
#include<vector>
#include<algorithm>

bool isVowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ) {
        return true;
    }
    return false;
}

std::string sortVowels(std::string s) {
    std::vector<char> vowels;

    for (int i = 0; i < s.size(); ++i) {
        if (isVowel(s[i])) {
            vowels.push_back(s[i]);
        }
    }

    std::sort(vowels.begin(), vowels.end());

    int idx = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (isVowel(s[i])) {
            s[i] = vowels[idx++];
        }
    }

    return s;
}

int main() {


    std::cin.get();
}
