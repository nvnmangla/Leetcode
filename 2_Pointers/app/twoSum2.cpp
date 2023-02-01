
#include <iostream>
#include <vector>
#include<algorithm>
    
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target){

    auto p1 = 0;
    auto p2 = (int)numbers.size()-1;

    while(p1<p2){
      auto sum = numbers[p1] + numbers[2];

      if (sum>target){
        p2 -- ;
      }
      else if(sum<target){
        p1++;
      }
      else{
        return vector<int> {p1+1,p2+1};
      }
    }

  }


int main(){

 vector<int>num =  {5,25,75};
 int target = 100;

 auto ans = twoSum(num,target);

 for(int a:ans){
  cout<<a<<"\n";
 }
}
