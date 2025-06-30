#include<iostream>
#include<vector>

int countServers(std::vector<std::vector<int>>& grid) {
    int count = 0;
    int r_count = 0;

    for(int i = 0; i < grid.size(); ++i) {
        for(int j = 0; j < grid[i].size(); ++j) {
            if(grid[i][j] == 1) {
                ++count;
            }
        }
    }
    return count;
}

int main() {


    std::cin.get();
}



