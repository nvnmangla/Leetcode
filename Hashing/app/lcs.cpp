
#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int longestConsecutive(vector<int>& nums) {


if (nums.empty()){
return 0 ;
}
    map<int, int> ans{};

  for (int i{}; i < nums.size(); i++) {
    if (!ans[nums[i]]) {
      ans[nums[i]] = 1;
    }
  }
  int l{};
  int k{};
  int prev = ans.begin()->first;
  for (auto it = ans.begin(); it != ans.end(); it++) {
    if (prev == it->first - 1) {
        k++;
    }
    else {
        k = 0;
    }
    prev = it->first;
    if (l < k) {
      l = k;
    }
  }
  return l + 1;
}




int main() {
  vector<int> nums = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};
  auto x = longestConsecutive(nums);
  cout << x << endl;

  return 0;
}