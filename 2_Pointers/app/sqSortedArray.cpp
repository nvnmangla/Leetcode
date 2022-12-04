#include <iostream>
#include <vector>
#include<algorithm>
    
using namespace std;


int main(){
    vector<int>sol{};
    vector<int>nums = {-4,-3,6,13};

    for(std::vector<int>::iterator it=nums.begin();it<nums.end();it++){
      *it *= *it;
    }

    sort(nums.begin(),nums.end());



    for (int n:nums){
      cout<<n<<'\n';
    }
  

    return 0;
}
