#include <iostream>
#include <vector>
#include<algorithm>
    
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
  sort(nums.begin(),nums.end());
  vector<vector<int>>sol{};
  for(vector<int>::iterator i = nums.begin();i<nums.end()-2;i++){

    auto p1 = i+1;
    auto p2 = nums.end()-1;
    while(p1<p2){

      auto sum = *i + *p1 + *p2;

      if (sum == 0){
        sol.push_back(vector<int>  {*i , *p1,*p2});
        while(p1<p2 && *p1 == *(p1+1)){
            p1++;
        }
        while(p1<p2 && *p2 == *(p2-1)){
            p2--;
        }

        break;
      }
      else if (sum<0){
          p1 ++;
      }
      else{
        p2 -- ;
      }

    }

  }
  return sol;


}


int main(){

 vector<int>num =  {-1,0,1,2,-1,-4};
//  int target = 100;

 auto ans = threeSum(num);

  return 0;
}

