#include<iostream>
#include<vector>
#include<bitset>

int findTheLongestSubstring(std::string s) {
    std::vector<int> first(32, -2);
    first[0] = -1;
    int state = 00000;
    int max = 0;

    for (int i = 0; i < s.size(); ++i) {
        switch (s[i]) {
            case 'a': state ^= (1 << 0); break;
            case 'e': state ^= (1 << 1); break;
            case 'i': state ^= (1 << 2); break;
            case 'o': state ^= (1 << 3); break;
            case 'u': state ^= (1 << 4); break;
        }

        if (first[state] == -2) {
            first[state] = i;
        }

        if (max <= i - first[state]) {
            max = i - first[state];
        }
    }

    return max;
}

int main() {
    std::string s = "eleetminicoworoep";

    std::cout << findTheLongestSubstring(s);

    std::cin.get();
}

