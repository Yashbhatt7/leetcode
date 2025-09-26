#include<iostream>
#include<unordered_map>

int countGoodSubstrings(std::string s) {
    if (s.length() < 3) return 0;

    std::unordered_map<char, int> freq;
    int count = 0;

    for (int i = 0; i < 3; ++i) {
        freq[s[i]]++;
    }
    if (freq.size() == 3) ++count;

    for (int i = 3; i < s.length(); ++i) {
        --freq[s[i - 3]];
        if (freq[s[i - 3]] == 0) {
            freq.erase(s[i - 3]);
        }

        ++freq[s[i]];
        if (freq.size() == 3) {
            ++count;
        }
    }
    return count;
}

int main() {

}

