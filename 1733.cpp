#include<iostream>
#include<vector>
#include<unordered_set>

int minimumTeachings(int n, std::vector<std::vector<int>>& languages, std::vector<std::vector<int>>& friendships) {
    std::vector<std::unordered_set<int>> knows(friendships.size());

    return 0;
}

int main() {
    int n = 2;
    std::vector<std::vector<int>> languages = { {1}, {2}, {1, 2} };
    std::vector<std::vector<int>> friendships = { {1, 2}, {1, 3}, {2, 3} };

    minimumTeachings(n, languages, friendships);

    std::cin.get();
}

