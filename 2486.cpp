#include<iostream>

int appendCharacters(std::string s, std::string t) {
    int j = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == t[j]) {
            ++j;
        }
    }

    int size = t.size() - j;

    return size;
}

int main() {
    std::string s = "coaching";
    std::string t = "coding";

    std::cout << appendCharacters(s, t);

    std::cin.get();
}


