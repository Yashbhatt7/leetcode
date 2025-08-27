#include<iostream>
#include<vector>

int areaOfMaxDiagonal(std::vector<std::vector<int>>& dimensions) {
    int max = 0;
    int a = 0;
    int b = 0;

    for (int i = 0; i < dimensions.size(); ++i) {
        int cal = dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1];
        int area = dimensions[i][0] * dimensions[i][1];

        if (max < cal) {
            max = cal;
            a = dimensions[i][0];
            b = dimensions[i][1];
        } else if (max == cal) {
            if (area > a * b) {
                a = dimensions[i][0];
                b = dimensions[i][1];
            }
        }
    }

    return a * b;
}

int main() {
    std::vector<std::vector<int>> dimensions = {
                 { 1,10 },
                 { 3,10 },
                 { 4,4 },
                 { 2,6 },
                 { 6,3 },
                 { 6,4 },
                 { 9,1 },
                 { 6,1 },
                 { 2,3 },
    };

    std::cout << areaOfMaxDiagonal(dimensions);

    std::cin.get();
}

