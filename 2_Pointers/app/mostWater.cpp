// problem 11
#include <iostream>
#include<vector>

using namespace std;

int maxArea(vector<int>& height) {
        auto p1 = 0;
        auto p2 = height.size();

        int max_area = 0;
        while   (p1 < p2) {
           
           auto area = min(height[p1], height[p2])*(p2-p1);
           max_area = area ? max_area < area:max_area;

        }


    }