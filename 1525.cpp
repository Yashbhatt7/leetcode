#include<iostream>
#include<vector>
#include<unordered_map>

int numSplits(std::string s) {
    std::unordered_map<char, int> leftF;
    std::unordered_map<char, int> rightF;
    int count = 0;

    for (const auto& ch : s) {
        ++leftF[ch];
    }
    if (leftF.size() == 1) {
        return s.size() - 1;
    }

    for (int i = 0; i < s.size(); ++i) {
        ++rightF[s[i]];
        --leftF[s[i]];

        if (leftF[s[i]] == 0) {
            leftF.erase(s[i]);
        }

        if (leftF.size() == rightF.size()) {
            std::cout << i << "\n";
            ++count;
        }
    }

    return count;
}

int main() {
    std::string s = "acbadbaada";

    std::cout << numSplits(s);

    std::cin.get();
}

