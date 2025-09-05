#include<iostream>
#include<string>
#include<unordered_map>

int findTheLongestSubstring(std::string s) {
    std::unordered_map<char, int> frMap;
    std::string str = "";
    int max = 0;

    int left = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ) {
            // std::cout << s[i] << "\n";
            ++frMap[s[i]];
            if (frMap[s[i]] > 2) {
                while (s[left] != s[i]) {
                    // std::cout << s[left] << "\n";
                    ++left;
                }
                ++left;
                std::cout << s[left] << "\n";
                --frMap[s[i]];
            }
        }
        if (max < i - left) {
            max = i - left;
        }
    }

    // std::cout << "left: " << left << "\n";

    return max + 1;
}

int main() {
    std::string s = "eleetminicoworoep";

    std::cout << findTheLongestSubstring(s);

    std::cin.get();
}

