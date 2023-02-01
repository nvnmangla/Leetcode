
// Problem 1, 2 Sums

#include <iostream>
#include <vector>
#include<algorithm>
#include <map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
  
  map<int,int> look;

  for(int i=0; i<(int)nums.size();i++){

    if(look.find(target - nums[i]) == look.end()){  // Elemnt counterpart is not in map
        look[nums[i]] = i;
    }
    else {
      return vector<int>{look[target - nums[i]],i};
    }

  }
  return {};
}


int main(){

 vector<int>num =  {5,25,75};
 int target = 100;

 auto ans = twoSum(num,target);

 for(int a:ans){
  cout<<a<<"\n";
 }
}
