#include<iostream>
#include<vector>
#include<algorithm>

int findLengthOfShortestSubarray(std::vector<int>& arr) {
    int count = 0;

    if(arr.size() == 1) {
        return count;
    }

    for(int i = 0; i < arr.size();) {
        if(i + 1 >= arr.size()){
            break;
        }

        if(arr[i] > arr[i + 1]) {
            /*std::cout << arr[i] << "\n";*/
            arr.erase(arr.begin() + i);
            ++count;

            if (i > 0) {
                --i;
            }
        }
        else {
            ++i;
        }
    }
    /*std::cout << arr[0] << "\n";*/
    /*std::cout << arr[1] << "\n";*/
    /*std::cout << "\n\n";*/

    if(!std::is_sorted(arr.begin(), arr.end())) {
        return findLengthOfShortestSubarray(arr);
    }

    return count;
}

int main() {
    std::vector<int> arr { 1, 2, 3, 10, 4, 2, 3, 5 };
    std::vector<int> arr3 { 1, 2, 3, 10, 0, 7, 8, 9 };
    std::vector<int> arr1 { 1, 2, 3 };
    std::vector<int> arr2 { 5, 4, 3, 2, 1 };

    std::cout << findLengthOfShortestSubarray(arr3) << " ";
    /*std::cout << findLengthOfShortestSubarray(arr1) << " ";*/
    /*std::cout << findLengthOfShortestSubarray(arr) << " ";*/
    /*std::cout << findLengthOfShortestSubarray(arr2) << " ";*/

    std::cin.get();
}




