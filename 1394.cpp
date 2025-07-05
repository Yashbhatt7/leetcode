#include<algorithm>
#include<iostream>
#include<vector>
#include<unordered_map>

int findLucky(std::vector<int>& arr) {
    int num = 0;
    std::vector<int> vec;
    std::unordered_map<int, int> freq_map;

    for(const auto& i : arr) {
        ++freq_map[i];
    }

    for(const auto& i : freq_map) {
        if(i.first == i.second) {
            vec.push_back(i.first);
        }
    }

    std::sort(vec.begin(), vec.end());
    if(!vec.empty()) {
        return vec[vec.size() - 1];
    }

    return -1;
}

int main() {
    std::vector<int> arr = { 2,2,3,4 };

    std::cout << findLucky(arr);

    std::cin.get();
}


