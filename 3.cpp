#include<iostream>
#include<unordered_map>

int lengthOfLongestSubstring(std::string s) {
    if (s.size() == 1) return 1;
    std::unordered_map<char, int> freqCheck;
    int max = 0;

    int left = 0;
    for (int i = 0; i < s.size(); ++i) {
        ++freqCheck[s[i]];

        if (freqCheck[s[i]] > 1) {
            while (s[left] != s[i]) {
                --freqCheck[s[left]];
                ++left;
            }
            --freqCheck[s[left]];
            ++left;
        }
        max = std::max(max, i - left + 1);
    }

    return max;
}

int main() {
    // std::string s = "abcabcbb";
    std::string s = "pwwkew";
    // std::string s = "aab";
    // std::string s = "dvdf";

    std::cout << lengthOfLongestSubstring(s);

    std::cin.get();
}

