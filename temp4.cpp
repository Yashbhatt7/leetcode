#include<iostream>
#include<vector>
#include<cmath>


// int min(std::vector<int> vec) {
//     int MIN = vec[0];
//     int T_MIN = 0;
//
//     for(int i = 0; i < vec.size(); ++i) {
//         int min = vec[i];
//         T_MIN = vec[i];
//         for(int j = i + 1; j < vec.size(); ++j) {
//             min += vec[j];
//             if(min < T_MIN) {
//                 T_MIN = min;
//             }
//         }
//         if(T_MIN < MIN) {
//             MIN = T_MIN;
//         }
//     }
//
//     return MIN;
// }


// int positiveSum(std::vector<int> vec) {
//     int count = 0;
//
//     for(int i = 0; i < vec.size(); ++i) {
//         int sum = vec[i];
//         int t_count = 1;
//         int temp = 0;
//         for(int j = i + 1; j < vec.size(); ++j) {
//             sum += vec[j];
//             ++t_count;
//             if(sum > 0) {
//                 temp = t_count;
//             }
//         }
//         if(temp > count) {
//             count = temp;
//         }
//     }
//
//     return count;
// }




int max(std::vector<int> vec) {
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

    std::cout << max(vec);
    // std::cout << min(vec);
    // std::cout << positiveSum(vec);

    std::cin.get();
}


