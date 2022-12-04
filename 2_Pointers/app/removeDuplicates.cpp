#include <iostream>
#include <vector>
#include<algorithm>
    
using namespace std;


int main(){
    vector<int>sol{};
    vector<int>nums = {4,3,6,13,13,4,6};

    for (vector<int>::iterator it = nums.begin();it<nums.end();++it){
      
      if(find(sol.begin(),sol.end(),*it) != sol.end()){

        nums.erase(it);
        it--;
      }
      else{
        sol.push_back(*it);
      }

    }
    return 0;
}
