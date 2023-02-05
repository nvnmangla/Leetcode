// Problem 347

#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {

            map <int, int> kFrequent;  // map for frequency

            for (int i = 0; i < nums.size(); i++) {
                
                if (kFrequent.find(nums[i]) != kFrequent.end()) {
                    kFrequent[nums[i]] +=1;
                    }
                else {
                    kFrequent[nums[i]] =1;
                }
                
            }
            

    }



    