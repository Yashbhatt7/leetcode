#include<iostream>
#include<vector>
#include<algorithm>

int findLengthOfShortestSubarray(std::vector<int>& arr) {
    std::vector<int> prefix;
    std::vector<int> suffix;

    prefix.push_back(arr[0]);

    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] >= prefix.back()) {
            prefix.push_back(arr[i]);
        } else {
            break;
        }
    }
    if (prefix.size() == arr.size()) return 0;

    suffix.push_back(arr[arr.size() - 1]);
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] <= suffix.back()) {
            suffix.push_back(arr[i]);
        } else {
            break;
        }
    }
    std::reverse(suffix.begin(), suffix.end());

    int j = 0;
    for (int i = prefix.size() - 1; i >= 0; --i) {
        if (suffix[j] == 0) {
            ++j;
            continue;
        }
        if (prefix.back() > suffix[j]) {
            prefix.erase(prefix.begin() + i);
        }
        if (!prefix.empty() && prefix.back() < suffix[j]) {
            break;
        }
    }

    return arr.size() - (prefix.size() + suffix.size() + j);
}

int main() {
    std::vector<int> arr  { 1, 2, 3, 10, 4, 2, 3, 5 };
    std::vector<int> arr3 { 1, 2, 3, 10, 0, 7, 8, 9 };
    std::vector<int> arr1 { 1, 2, 3 };
    std::vector<int> arr2 { 5, 4, 3, 2, 1 };

    std::cout << findLengthOfShortestSubarray(arr3) << " ";
    /*std::cout << findLengthOfShortestSubarray(arr1) << " ";*/
    /*std::cout << findLengthOfShortestSubarray(arr) << " ";*/
    /*std::cout << findLengthOfShortestSubarray(arr2) << " ";*/

    std::cin.get();
}




