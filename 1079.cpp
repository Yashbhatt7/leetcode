#include<iostream>
#include<vector>
#include<unordered_map>

void backtrack(std::unordered_map<char, int>& freq, int& count, int length) {
    for (auto& [ch, f] : freq) {
        if (f > 0) { // If we still have this character left
            count++;  // Count this sequence

            f--; // Use this character
            backtrack(freq, count, length + 1);
            f++; // Backtrack (restore character)
        }
    }
}

int numTilePossibilities(std::string tiles) {
    std::unordered_map<char, int> freq;
    for (char ch : tiles) freq[ch]++; // Count character frequencies

    int count = 0;
    backtrack(freq, count, 0);
    return count;
}

int main() {
    std::string tiles = "AAB";
    std::cout << numTilePossibilities(tiles) << std::endl;

    std::cin.get();
}



