#include<iostream>
#include<vector>
#include<algorithm>

bool check(std::vector<int>& nums) {
    std::vector<int> vec;
    auto sml_ele = std::min_element(nums.begin(), nums.end());

    auto first_oc = std::find(nums.begin(), nums.end(), *sml_ele);

    auto second_oc = std::find(first_oc + 1, nums.end(), *sml_ele);

    auto last_oc = std::find(nums.rbegin(), nums.rend(), *sml_ele);

    int index = -1;
    int index2 = -1;
    int index3 = -1;

    if(sml_ele != nums.end()) {
        index = std::distance(nums.begin(), sml_ele);
        index2 = std::distance(nums.begin(), second_oc);
        if(last_oc != nums.rend()) {
            index3 = std::distance(nums.begin(), last_oc.base()) - 1;
        }
    }
    else {
        return false;
    }

    bool all_same = std::all_of(nums.begin() + index, nums.begin() + index3 + 1,
                            [&](int x) { return x == *sml_ele; });

    if(index2 == index3 && !all_same) {
        for(int i = index3; i < nums.size(); ++i) {
            vec.push_back(nums[i]);
        }
        for(int i = 0; i < index3; ++i) {
            vec.push_back(nums[i]);
        }
    }
    else if(index2 != index3 && index2 != index) {
        for(int i = index2; i < nums.size(); ++i) {
            vec.push_back(nums[i]);
        }
        for(int i = 0; i < index2; ++i) {
            vec.push_back(nums[i]);
        }
    }
    else {
        for(int i = index; i < nums.size(); ++i) {
            vec.push_back(nums[i]);
        }
        for(int i = 0; i < index; ++i) {
            vec.push_back(nums[i]);
        }
    }

    if(is_sorted(vec.begin(), vec.end())) {
        return true;
    }

    return false;
}

int main() {
    /*std::vector<int> vec { 3, 4, 1, 2 };*/
    std::vector<int> vec { 3, 4, 1, 2 };

    std::cout << check(vec);

    std::cin.get();
}


