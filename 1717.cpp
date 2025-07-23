#include<iostream>
#include<string>

int maximumGain(std::string s, int x, int y) {
    int score = 0;

    for(int i = 0; i < s.size(); ++i) {
        if(y > x) {
            auto idx = s.find("ba", i);
            if(idx != std::string::npos) {
                s.erase(s.begin() + idx, s.begin() + (idx + 2));
                score += y;
                i = i - 1;
            }
            else {
                auto idx1 = s.find("ab", i);
                if(idx1 != std::string::npos) {
                    s.erase(s.begin() + idx1, s.begin() + (idx1 + 2));
                    score += x;
                    i = i - 1;
                }
            }
        } else {
            auto idx3 = s.find("ab", i);
            if(idx3 != std::string::npos) {
                auto ss = s.erase(s.begin() + idx3, s.begin() + (idx3 + 2));
                score += x;
                i = i - 1;
            }
            else {
                auto idx2 = s.find("ba", i);
                if(idx2 != std::string::npos) {
                    s.erase(s.begin() + idx2, s.begin() + (idx2 + 2));
                    score += y;
                    i = i - 1;
                }
            }
        }
    }

    return score;
}

int main() {
    std::string s = "aabbaaxybbaabb";
    int x = 5;
    int y = 4;

    std::cout << maximumGain(s, x, y);
    // maximumGain(s, x, y);

    std::cin.get();
}
