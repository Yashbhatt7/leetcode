#include<iostream>
#include<unordered_map>

int maxFreqSum(std::string s) {
    std::unordered_map<char, int> consonantFreq;
    std::unordered_map<char, int> vowelFreq;

    int max1 = 0;
    int max2= 0;
    for (const auto& i : s) {
        if (i == 'a' || i == 'i' || i == 'e' || i == 'o' || i == 'u') {
            ++vowelFreq[i];
            max1 = std::max(max1, vowelFreq[i]);
        } else {
            ++consonantFreq[i];
            max2 = std::max(max2, consonantFreq[i]);
        }
    }

    return max1 + max2;
}

int main() {


    std::cin.get();
}

