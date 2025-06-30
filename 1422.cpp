#include<iostream>
#include<algorithm>
#include<vector>

int maxScore(std::string s) {
    std::vector<int> n(s.size());
    std::string str1 = "";
    std::string str2 = s;
    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0; i < (s.size() - 1); ++i) {
        str1 += s[i];
        sum1 = std::count(str1.begin(), str1.end(), '0');

        str2.erase(0, 1);
        sum2 = std::count(str2.begin(), str2.end(), '1');

        n[i] = sum1 + sum2;

        sum1 = 0;
        sum2 = 0;
    }
    return *std::max_element(n.begin(), n.end());
}

int main() {
    std::string str = "011101";

    std::cout << maxScore(str);

    std::cin.get();
}


