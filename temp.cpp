#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::string var = "hello world";
    std::unordered_map<char, int> count;

    // Count occurrences of each character
    for (char ch : var) {
        count[ch]++;
    }

    // Print initial counts
    std::cout << "Initial counts:" << std::endl;
    for (const auto& pair : count) {
        std::cout << "'" << pair.first << "': " << pair.second << std::endl;
    }

    // Decrement the count for specific characters
    char to_decrement = 'l'; // Decrement 'l'
    if (count.find(to_decrement) != count.end()) { // Check if the key exists
        count[to_decrement]--; // Decrement the count
        if (count[to_decrement] == 0) { // Optional: Remove the key if count reaches 0
            count.erase(to_decrement);
        }
    }

    // Print updated counts
    std::cout << "\nCounts after decrementing 'l':" << std::endl;
    for (const auto& pair : count) {
        std::cout << "'" << pair.first << "': " << pair.second << std::endl;
    }

    return 0;
}



