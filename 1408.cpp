#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>

std::vector<std::string> stringMatching(std::vector<std::string>& words) {
    std::vector<std::string> result;
    std::unordered_set<std::string> seen;

    for (int i = 0; i < words.size(); ++i) {
        for (int j = 0; j < words.size(); ++j) {
            if (i != j && words[i].find(words[j]) != std::string::npos) {
                if (seen.find(words[j]) == seen.end()) {
                    result.push_back(words[j]);
                    seen.insert(words[j]);
                }
            }
        }
    }
    return result;
}

int main() {
    std::vector<std::string> vec2 = {
        { "blue" },
        { "blue" },
        { "green" },
        { "bl" },
        { "een" },
        { "en" },
        { "ee" },
        { "re" },
    };

    std::vector<std::string> vec = stringMatching(vec2);

    for(std::string val : vec) {
        std::cout << val << "\n";
    }

    /*std::cout << vec[0].size();*/
    /*std::cout << vec[1].size();*/
    /*std::cout << vec[2].size();*/
    /*std::cout << vec[3].size();*/

    std::cin.get();
}



