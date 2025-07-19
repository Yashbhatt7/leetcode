#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

std::vector<std::string> removeSubfolders(std::vector<std::string>& folder) {
    std::vector<std::string> result;

    std::sort(folder.begin(), folder.end());

    for (const std::string& current : folder) {
        if (result.empty() ||
            !(current.size() > result.back().size() &&
            current.compare(0, result.back().size(), result.back()) == 0 &&
            current[result.back().size()] == '/')) {
            result.push_back(current);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> folder = {
        "/a",
        "/a/b",
        "/c/d",
        "/c/d/e",
        "/c/f",

        // "/a",
        // "/a/b/c",
        // "/a/b/d",

        // "/a/b/c",
        // "/a/b/ca",
        // "/a/b/d",
    };

    std::vector<std::string> fd = removeSubfolders(folder);

    for(const auto& i : fd) {
        std::cout << i << " ";
    }

    std::cin.get();
}


