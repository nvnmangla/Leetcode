// Problem 347

#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool sortByVal(const pair<int, int> &a, 
               const pair<int, int> &b) 
{ 
    return (a.second > b.second); 
} 

vector<int> topKFrequent(vector<int>& nums, int k) {

            map <int, int> kFrequent{};  // map for frequency

            for (int i = 0; i < (int)nums.size(); i++) {

                if (kFrequent.find(nums[i]) == kFrequent.end()) {
                    kFrequent[nums[i]] =1;
                    }
                else {
                    kFrequent[nums[i]] +=1;
                }
                
            }

            vector<pair<int,int>>freq_;

            for (auto it = kFrequent.begin(); it != kFrequent.end();it++){
                freq_.push_back(make_pair(it->first,it->second));
            }

            sort(freq_.begin(), freq_.end(), sortByVal);

            vector<int>freq{};
            for (int i = 0; i < k; i++){
                cout<< freq_[i].second <<freq_[i].first;
                freq.push_back(freq_[i].first);
            }
            return freq;
            

    }


int main(){

    vector<int>nums = {1,1,1,3,2,2,2,2,4,4,4,4};
    auto vec = topKFrequent(nums,3);
    
    for (int i : vec){
        cout<< i <<'\n';
    }

return 0;
}

    