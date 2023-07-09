// problem 11
#include <iostream>
#include<vector>

using namespace std;

int trap(vector<int>& height) {

      // auto p1 = 0;      
      // auto p2 = height.size()-1;


      int l_pos = 0;
      int r_pos = height.size()-1;
      int l_max = height[r_pos];
      int r_max = height[l_pos];


      while(l_pos<r_pos){

         if (height[l_pos] >= l_max) {
            l_max = l_pos;
            l_pos++;
         }

         else if (height[r_pos] >= r_max) {
            r_max = r_pos;
            r_pos++;
         }

         else if (height[l_pos] <= l_max && r_max >= l_max){

         }


      }




}

int main(){
   auto v = std::vector<int>{1,8,6,2,5,4,8,3,7};
   auto area = trap(v);
   cout<<area<<'\n';

   return 0;
}
