#include<iostream>
#include<vector>
#include<algorithm>

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::vector<int> mergedVector(nums1.size() + nums2.size());

    std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), mergedVector.begin());

    std::sort(mergedVector.begin(), mergedVector.end());

    int n = mergedVector.size();
    int nn = n/2;
    if (n % 2 == 0) {
        return (double)(mergedVector[nn - 1] + mergedVector[nn - 2]) / 2;
    }

    return mergedVector[nn - 1];
}

int main() {


    std::cin.get();;
}

