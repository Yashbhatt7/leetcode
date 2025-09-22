#include<iostream>

bool isSubsequence(std::string s, std::string t) {
    int idx = 0;

    int left = 0;
    int right= t.size() - 1;
    int count = 0;
    while (left < t.size()) {
        if (s[idx] == t[left]) {
            ++count;
            ++idx;
        }
        ++left;
    }

    return count == s.size();
}

int main() {
    std::string s = "abc";
    std::string t = "ahbgdc";

    std::cout << isSubsequence(s, t);

    std::cin.get();
}

