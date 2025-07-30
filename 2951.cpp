#include<iostream>
#include<vector>

std::vector<int> findPeaks(std::vector<int>& mountain) {
    std::vector<int> indices;

    for (int i = 1; i < mountain.size() - 1; ++i) {
        if(mountain[i] > mountain[i - 1] && mountain[i] > mountain[i + 1]) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::vector<int> mountain = { 1,4,3,8,5 };

    std::vector<int> vec = findPeaks(mountain);

    for(const auto& i : vec) {
        std::cout << i << " ";
    }

    std::cin.get();
}
