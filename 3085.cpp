#include<iostream>
#include<vector>
#include<cmath>
#include<unordered_map>
#include<algorithm>

int minimumDeletions(std::string word, int k) {
    int result = 0;
    std::unordered_map<char, int> freq;

    for(char ch : word) {
        ++freq[ch];
    }

    std::vector<std::pair<char, int>> freq_list(freq.begin(), freq.end());

    std::sort(freq_list.begin(), freq_list.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });

    for(int i = 0; i < word.size(); ++i) {
        for(int j = i + 1; j < word.size(); ++j) {
            if(abs(freq_list[i].second - freq_list[freq_list.size() - 1].second)) {

            }
        }

        std::cout << freq_list[i].first << ": " << freq_list[i].second << '\n';
    }


    return result;
}

int main() {
    std::string word = "aabcaba";
    int k = 0;

    // word.erase(2, 1);
    // std::cout << word;

    std::cout << minimumDeletions(word, k);

    std::cin.get();
}


