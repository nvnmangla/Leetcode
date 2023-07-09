
#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> productExceptSelf(vector<int>& nums) {
    int n = (int)nums.size();
    vector<int> left_product(n);
    vector<int> right_product(n);
    vector<int> ans(n);
    // vector<int>left_product{};

    left_product[0]=1;
    right_product[n-1]=1;

    for (int i = 1; i < nums.size(); i++) {
      left_product[i] = left_product[i - 1] * nums[i - 1];
      right_product[n-i-1] = right_product[n-(i - 1)-1] * nums[n-(i - 1)-1];

    }

    for (int i = 0; i < nums.size(); i++) {
      ans[i] = right_product[i] * left_product[i];
    }

    for(int a:ans){
        cout<<a<<endl;
    }

    return ans;
  }
};

int main() {
  Solution s;
  vector<int> nums = {1, 2, 3, 4,0};
  s.productExceptSelf(nums);

  return 0;
}