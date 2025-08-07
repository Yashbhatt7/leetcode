#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

std::string frequencySort(std::string s) {
    std::string str;

    std::unordered_map<char, int> freq;

    for (const auto& i : s) {
        ++freq[i];
    }

    std::vector<std::pair<char, int>> sort_freq(freq.begin(), freq.end());

    std::sort(sort_freq.begin(), sort_freq.end(),
              [](const auto& a, const auto& b) {
              return a.second > b.second;
              });

    for (const auto& i : sort_freq) {
        str += std::string(i.second, i.first);
    }

    return str;
}

int main () {
    std::string s = "Aabb";

    std::cout << frequencySort(s);

    std::cin.get();
}
