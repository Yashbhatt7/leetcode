#include <iostream>
#include <unordered_map>

bool canConstruct(std::string s, int k) {
    int odd = 0;

    if(k > s.size())
        return false;

    std::unordered_map<char, int> counter;

    for(char c : s) {
        ++counter[c];
    }

    for(const std::pair<const char, int>& c : counter) {
        if(c.second % 2 == 1) {
            ++odd;
        }
    }
    return odd <= k;
}

int main() {
    std::string str = "annabelle";
    int k = 2;

    std::cout << canConstruct(str, k);

    std::cin.get();
}
