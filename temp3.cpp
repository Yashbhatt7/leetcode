#include<iostream>
#include<vector>
#include<unordered_set>

std::vector<int> vowelStrings(std::vector<std::string>& words, std::vector<std::vector<int>>& queries) {
    std::vector<int> cal_prefix(words.size(), 0);
    std::unordered_set<char> targetSet = {'a', 'e', 'i', 'o', 'u'};
    std::vector<int> prefixSum;

    for(int i = 0; i < words.size(); ++i) {
        if(targetSet.count(words[i][0]) > 0 && targetSet.count(words[i].back()) > 0) {
            cal_prefix[i] = 1;
        }
    }

    prefixSum[0] = cal_prefix[0];
    for(int i = 1; i < words.size(); ++i) {
        prefixSum[i] = prefixSum[i - 1] + cal_prefix[i];
    }

    for(int a : cal_prefix) {
        std::cout << a << "\n";
    }

    return cal_prefix;
}

int main() {
    std::vector<std::string> words {
        "aba","bcb","ece","aa","e",
    };

    std::vector<std::vector<int>> queries {
        {0,2},{1,4},{1,1},
    };

    std::vector<int> vec = vowelStrings(words, queries);

    /*for(int a : vec) {*/
    /*    std::cout << a << "\n";*/
    /*}*/

    std::cin.get();
}



