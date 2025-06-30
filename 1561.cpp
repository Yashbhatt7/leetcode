#include<iostream>
#include<vector>
#include<algorithm>

int maxCoins(std::vector<int>& piles) {
    int sum = 0;
    std::vector<int> temp = piles;
    std::sort(temp.begin(), temp.end(), std::greater<int>());

    int i = 0;
    while(!temp.empty()) {
        temp.erase(temp.begin());
        sum = sum + temp[i];
        temp.erase(temp.begin());
        temp.pop_back();
    }

    return sum;
}

int main() {
    /*std::vector<int> vec { 2, 4, 1, 2, 7, 8 };*/
    /*std::vector<int> vec { 2, 4, 5 };*/
    std::vector<int> vec { 9,8,7,6,5,1,2,3,4 };

    std::cout << maxCoins(vec);

    std::cin.get();
}

