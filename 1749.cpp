#include<iostream>
#include<vector>

int maxAbsoluteSum(std::vector<int>& vec) {
    if(vec.size() == 1) {
        return 1;
    }

    int MAX = 0;
    int T_MAX = vec[0];
    int t_sum = 0;

    for(int i = 0; i < vec.size(); ++i) {
        int sum = vec[i];
        MAX = vec[i];
        t_sum = 0;
        for(int j = i + 1; j < vec.size(); ++j) {
            sum += vec[j];
            if(sum < 0) {
                t_sum = -sum;
            }
            else {
                t_sum = sum;
            }
            if(t_sum > MAX) {
                MAX = t_sum;
            }
        }
        if(MAX > T_MAX) {
            T_MAX = MAX;
        }
    }

    return T_MAX;
}

int main() {
    std::vector<int> vec = { 1,-3,2,3,-4 };

    std::cout << maxAbsoluteSum(vec);

    std::cin.get();
}


