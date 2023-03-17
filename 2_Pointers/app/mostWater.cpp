// problem 11
#include <iostream>
#include<vector>

using namespace std;

int maxArea(vector<int>& height) {
      
      auto p2 = height.size()-1;


      auto max_area = 0;
      
      while(p2 > 0){
         auto p1 = 0;
         while(p1<p2){
            auto temp_area = min(height[p1],height[p2])*(p2-p1);
            if (temp_area > max_area){
               max_area = temp_area;
            }
            p1++ ;
            }
            p2 -- ;
      }
      return max_area;

}

int main(){
   auto v = std::vector<int>{2,3,4,5,18,17,6};
   auto area = maxArea(v);
   cout<<area<<'\n';

   return 0;
}
