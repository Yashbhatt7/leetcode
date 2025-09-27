#include<iostream>
#include<vector>

double largestTriangleArea(std::vector<std::vector<int>>& points) {
    double maxArea = 0;

    for (int i = 0; i < points.size() - 2; ++i) {
        for (int j = i + 1; j < points.size() - 1; ++j) {
            for (int k = j + 1; k < points.size(); ++k) {
                int xi = points[i][0];
                int xj = points[j][0];
                int xk = points[k][0];
                int yi = points[i][1];
                int yj = points[j][1];
                int yk = points[k][1];

                double Area = std::abs(xi * (yj - yk) + xj * (yk - yi) + xk * (yi - yj)) / 2.0;
                maxArea = std::max(maxArea, Area);
            }
        }
    }
    return maxArea;
}

int main() {


    std::cin.get();
}

