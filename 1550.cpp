#include<iostream>
#include<vector>

bool threeConsecutiveOdds(std::vector<int>& arr) {
    bool check = false;

    for(int i = 0; i < arr.size() - 3; ++i) {
        if(arr[i] % 2 != 0 && arr[i + 1] % 2 != 0 && arr[i + 2] % 2 != 0) {
            std::cout << "asafsd";
            return true;
        }
    }

    return false;
}

int main() {
    // std::vector<int> vec = {
    //     2, 6, 4, 1
    // };

    std::vector<int> vec = {
        1, 2, 34, 3, 4, 5, 7, 23, 12
    };

    std::cout << threeConsecutiveOdds(vec);

    std::cin.get();
}


