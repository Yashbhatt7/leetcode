#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

std::string frequencySort(std::string s) {
    std::string str;
    std::map<char, int> freq;

    // Count frequency
    for (const auto& i : s) {
        ++freq[i];
    }

    // Convert to vector
    std::vector<std::pair<char, int>> sorted_freq(freq.begin(), freq.end());

    // Sort by frequency in descending order
    std::sort(sorted_freq.begin(), sorted_freq.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

    // Build the string
    for (const auto& [ch, count] : sorted_freq) {
        str.append(count, ch);  // Add the char `count` times
    }

    // Optional: print it
    std::cout << str << std::endl;

    return str;
}

int main () {
    std::string s = "kcccaaabbbaaabbbdddbdbdb";

    frequencySort(s);

    std::cin.get();
}
