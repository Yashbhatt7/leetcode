#include<iostream>
#include<vector>

int numberOfPairs(std::vector<std::vector<int>>& points) {
    int count = 0;

    for (int i = 0; i < points.size(); ++i) {
        for (int j = 0; j < points.size(); ++j) {
            if (i == j) {
                continue;
            }
            int x1 = points[i][0];
            int x2 = points[j][0];
            int y1 = points[i][1];
            int y2 = points[j][1];

            if (x1 <= x2 && y1 >= y2 && (x1 < x2 || y1 > y2)) {
                bool check = true;

                for (int k = 0; k < points.size(); ++k) {
                    if (k == i || k == j) {
                        continue;
                    }

                    int tx = points[k][0];
                    int ty = points[k][1];

                    if (x1 <= tx && tx <= x2 && y2 <= ty && ty <= y1) {
                        check = false;
                        break;
                    }
                }

                if (check) {
                    ++count;
                }
            }
        }
    }

    return count;
}

int main() {
    std::vector<std::vector<int>> points = {
        {3,1},
        {1,3},
        {1,1},
    };

    std::cout << numberOfPairs(points);

    std::cin.get();
}

