#include <iostream>
#include <lib.hpp>
#include <vector>
#include<algorithm>

using namespace std;

void print_v(vector<int>*nums){
    cout<<"{ ";
    for (int v:*nums){
        cout<<nums<<" ";
    }
    cout<<"}\n";
}    


int main(){

  std::vector<int>nums = {1,1,2,2,3,3,4,4,4,4,5,5};
  int i{};
  int j{(int)nums.size()-1};  

  while(i<j){  
      
      if (nums[i] == nums[j]){
            nums.erase(nums.begin()+i);
            nums.push_back(0);
            i--;
            while(nums[j] == 0){
              j-=1;
            }
        }
      i++;
      }
      print_v(&nums);
  return 0;
}    
