#include<iostream>
#include<unordered_map>

std::string minWindow(std::string s, std::string t) {
    std::unordered_map<char, int> freq;
    std::unordered_map<char, int> T;

    for (const auto& i : t) {
        ++T[i];
    }

    int total= T.size();

    if (total > s.size()) {
        return "";
    }

    int left = 0;
    int leftIdx = 0;
    int count = 0;
    int min = s.size();
    for (int i = 0; i < s.size(); ++i) {
        ++freq[s[i]];

        if (T.count(s[i]) && freq[s[i]] == T[s[i]]) {
            ++count;
        }

        while (count == total) {
            if (i - left + 1 < min) {
                min = i - left + 1;
                leftIdx = left;
            }

            --freq[s[left]];
            if (T.count(s[left]) && freq[s[left]] < T[s[left]]) {
                --count;
            }
            ++left;
        }
    }

    if (min == s.size() + 1) {
        return "";
    }

    return s.substr(leftIdx, min);
}

int main() {
    std::string s = "ADOBECODEBANC";
    std::string t = "ABC";

    std::cout << minWindow(s, t);

    std::cin.get();
}

