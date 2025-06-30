#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

bool primeSubOperation(std::vector<int> &nums) {
  int n = 0;
  int count = 0;

  int temp = nums[n];

  for (int i = nums[n] - 1; i >= 2; --i) {
    std::cout << i << "\n";
    for (int j = 1; j <= i; ++j) {
      std::cout << i << "\n";
      if (i % j == 0) {
        ++count;
      }
    }
    if (count > 2) {
      /*std::cout << temp << "\n";*/
      --i;
    } else {
      nums[n] = nums[n] - i;
    }

    if (nums[n] < nums[n + 1]) {
      ++n;
      i = nums[n];
    }

    if (n == nums.size()) {
      break;
    }
  }
  return std::is_sorted(nums.begin(), nums.end());
}

int main() {
  std::vector<int> vec = {4, 9, 6, 10};
  std::vector<int> vec2 = {6, 8, 11, 12};
  std::vector<int> vec3 = {5, 8, 3};

  std::cout << primeSubOperation(vec);
  /*primeSubOperation(vec2);*/
  /*primeSubOperation(vec3);*/

  for (int num : vec) {
    std::cout << num << " ";
  }
  std::cout << "\n";

  std::cin.get();
}



