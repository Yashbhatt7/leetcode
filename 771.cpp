#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>

int numJewelsInStones(std::string jewels, std::string stones) {
    int st = 0;

    std::unordered_map<char, int> freq;
    std::vector<char> ch;

    for (const auto& i : stones) {
        ++freq[i];
        ch.push_back(char(i));
    }

    for (int i = 0; i < jewels.size(); ++i) {
        auto it = std::find(ch.begin(), ch.end(), jewels[i]);

        if (it != ch.end()) {
            st += freq[jewels[i]];
        }
    }

    return st;
}

int main() {
    std::string jewels = "aA";
    std::string stones = "aAAbbbb";

    std::cout << numJewelsInStones(jewels, stones);

    std::cin.get();
}


