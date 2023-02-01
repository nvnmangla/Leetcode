#include <iostream>
#include <vector>
#include<algorithm>

#include<map>

using namespace std;
bool containsDuplicate(vector<int>& nums) {

    std::map<int,int>count;
        
    for (int i{};i<nums.size();i++){
      if (count.find(nums[i]) != count.end()){

          return true;
      }
      else {
          count[nums[i]] = 1;
      }
    }

    for( auto const& kv:count){

        cout<<kv.first<<' '<<kv.second<<'\n';
    }



    return false;
    
    }
int main(){

  vector<int>s = {1,2,3,1};
  
  cout<<containsDuplicate(s)<<'\n';

  return 0;
}

