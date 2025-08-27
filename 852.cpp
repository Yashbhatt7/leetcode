#include<iostream>
#include<vector>
#include<unordered_map>

int peakIndexInMountainArray(std::vector<int>& arr) {
    std::unordered_map<int, int> u_map;

    int idx = 0;
    for (const auto& i : arr) {
        u_map[i] = idx;
        ++idx;
    }

    std::sort(arr.begin(), arr.end());

    return u_map[arr[arr.size() - 1]];
}

int main() {
    std::vector<int> arr = { 0,2,1,0 };

    std::cout << peakIndexInMountainArray(arr);

    std::cin.get();
}

