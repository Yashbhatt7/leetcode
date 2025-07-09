#include<iostream>
#include<vector>

std::vector<int> getRow(int rowIndex) {
    if(rowIndex == 0) {
        return {1};
    }
    if(rowIndex == 1) {
        return {1, 1};
    }

    std::vector<int> vec = {};
    std::vector<int> temp = {};

    vec.push_back(1);
    vec.push_back(1);

    int update_indx = 0;
    int update_indx1 = 1;

    for(int i = 0; i < rowIndex - 1; ++i) {
        temp.push_back(1);
        for(int j = 0; j <= i; ++j) {
            temp.push_back(vec[update_indx] + vec[update_indx1]);
            ++update_indx;
            ++update_indx1;
        }
        temp.push_back(1);
        update_indx = 0;
        update_indx1 = 1;
        vec = temp;

        temp.erase(temp.begin(), temp.end());
    }

    return vec;
}

int main() {
    int rowIndex = 4;

    std::vector<int> vec = getRow(rowIndex);

    for(int i : vec) {
        std::cout << i << " ";
    }

    std::cin.get();
}


