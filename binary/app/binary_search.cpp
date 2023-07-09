

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target) {
  int e = nums.size();
  int s = 0;
  int i{};

  // int i = (s+e)/2;

  while (nums[i] != target) {
    if ((i == (s + e) / 2) && (nums[i] != target)) {
      return -1;
    }

    i = (s + e) / 2;

    if (nums[i] > target) {
      e = i;
    }

    else if (nums[i] < target) {
      s = i;
    }
  }

  return i;

  return i;
}

int main() {
  vector<int> nums = {-1, 0, 3, 5, 9, 12};
  cout << search(nums, 0);
}