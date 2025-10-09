#include<iostream>
#include<unordered_map>

int longestSubstring(std::string s, int k) {
    std::unordered_map<char, int> freq;
    int maxLen = 0;

    int left = 0;
    for (int i = 0; i < s.size(); ++i) {
        ++freq[s[i]];

        if (freq[s[i]] >= k) {

        }
    }

    return maxLen;
}

int main() {


    std::cin.get();
}

