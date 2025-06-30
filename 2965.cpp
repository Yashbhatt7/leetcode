#include<iostream>
#include <unordered_map>
#include<vector>

std::vector<int> findMissingAndRepeatedValues(std::vector<std::vector<int>>& grid) {
    std::vector<int> vec_rep;
    std::vector<int> vec_zero_freq;

    std::unordered_map<int, int> cnt_freq;

    for(int i = 1; i <= grid.size() * grid.size(); ++i) {
        cnt_freq[i] = 0;
    }

    for(auto& a : grid) {
        for(int num : a) {
            ++cnt_freq[num];
        }
    }

    for(auto& a : cnt_freq) {
        if(a.second > 1) {
            vec_rep.push_back(a.first);
        }
        if(a.second == 0) {
            vec_zero_freq.push_back(a.first);
        }
    }
    vec_rep.insert(vec_rep.end(), vec_zero_freq.begin(), vec_zero_freq.end());

    return vec_rep;
}

int main() {
    std::vector<std::vector<int>> matrix = {
        /*{9, 1, 7},*/
        /*{8, 9, 2},*/
        /*{3, 4, 6},*/


        { 1, 3 },
        { 2, 2 },
    };

    std::vector<int> vec = findMissingAndRepeatedValues(matrix);

    for(int i : vec) {
        std::cout << i << "\n";
    }

    std::cin.get();
}
