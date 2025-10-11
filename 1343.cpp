#include<iostream>
#include<vector>

int numOfSubarrays(std::vector<int>& arr, int k, int threshold) {
    int count = 0;
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        sum += arr[i];
    }
    int avg = sum / k;
    if (avg >= threshold) {
        ++count;
    }

    int left = 0;
    for (int i = k; i < arr.size(); ++i) {
        sum -= arr[left];
        ++left;
        sum += arr[i];
        avg = sum / k;
        if (avg >= threshold) {
            std::cout << avg << ": " << count << "\n";
            ++count;
        }
    }

    return count;
}

int main() {
    std::vector<int> arr = { 2,2,2,2,5,5,5,8 };
    int k = 3;
    int threshold = 4;

    std::cout << numOfSubarrays(arr, k, threshold);

    std::cin.get();
}

