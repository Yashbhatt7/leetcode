#include<iostream>
#include<vector>
#include<map>

int minimumTeachings(int n, std::vector<std::vector<int>>& languages, std::vector<std::vector<int>>& friendships) {
    std::map<int, std::vector<int>> userMap;

    int userKey = 1;
    for (const auto& i : languages) {
        userMap[userKey] = i;
        ++userKey;
    }

    // for (const auto& i : userMap) {
    //     std::cout << i.first << "-> { ";
    //     for (const auto& j : i.second) {
    //         std::cout << j << ", ";
    //     }
    //     std::cout << "} \n";
    // }



    return 0;
}

int main() {
    int n = 2;
    std::vector<std::vector<int>> languages = { {1}, {2}, {1, 2} };
    std::vector<std::vector<int>> friendships = { {1, 2}, {1, 3}, {2, 3} };

    minimumTeachings(n, languages, friendships);

    std::cin.get();
}

