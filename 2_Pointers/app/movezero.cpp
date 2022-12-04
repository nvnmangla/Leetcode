#include <iostream> 
#include <vector>
#include<algorithm>
    
using namespace std;

int main(){

  vector<int>nums = {0,1,0,2,0,0,0,0,5,0};
  int n = (int)nums.size();
  int i{};
  int j = n-1;

  while(nums[j] ==0 ){
        j--;
      }


  while(i<j){  
    
      if (nums[i] == 0  && nums[j] !=0 ){
            nums.erase(nums.begin()+i);
            nums.push_back(0);
            i--;
            while(nums[j] == 0){
              j-=1;
            }
        }
      i++;
      }
  return 0;

    }    
