#include<iostream>
#include<vector>
#include<unordered_set>

int subarrayBitwiseORs(std::vector<int>& arr) {
    std::unordered_set<int> res;
    int unique_ORs = 0;

    for(int i = 0; i < arr.size(); ++i) {
        for(int j = i; j < arr.size(); ++j) {
            unique_ORs |= arr[j];
            res.insert(unique_ORs);
        }
        unique_ORs = 0;
    }

    return res.size();
}

int main() {
    std::vector<int> arr = { 1, 2, 4, 1 };

    std::cout << subarrayBitwiseORs(arr);

    std::cin.get();
}
